import { Parser, Language }  from 'web-tree-sitter';

const isNode =
  typeof process !== "undefined" && process.versions?.node != null;

/**
 * Load a WASM file as an ArrayBuffer.
 * In Node.js the file is read from disk; in the browser it is fetched.
 *
 * @param {string} filename - bare filename, e.g. "tree-sitter-apex.wasm"
 * @param {string | URL | BufferSource} [wasmInput] - override: a path, URL, or
 *   already-loaded buffer. When provided, `filename` is ignored.
 * @returns {Promise<ArrayBuffer | Uint8Array | string | URL>}
 */
async function resolveWasm(filename, wasmInput) {
  if (wasmInput != null) {
    // Caller supplied their own source — pass it straight through.
    return wasmInput;
  }

  if (isNode) {
    const { readFile } = await import("fs/promises");
    const { fileURLToPath } = await import("url");
    const filePath = fileURLToPath(new URL(`./${filename}`, import.meta.url));
    return readFile(filePath);
  }

  // Browser: fetch relative to this module's URL.
  const url = new URL(`./${filename}`, import.meta.url);
  const response = await fetch(url);
  if (!response.ok) {
    throw new Error(`Failed to fetch ${url}: ${response.status} ${response.statusText}`);
  }
  return response.arrayBuffer();
}

/**
 * @param {string} filename
 * @param {string | URL | BufferSource} [wasmInput]
 * @returns {Promise<Parser>}
 */
async function getParser(filename, wasmInput) {
  await Parser.init();
  const parser = new Parser();
  const wasm = await resolveWasm(filename, wasmInput);
  const lang = await Language.load(wasm);
  parser.setLanguage(lang);
  return parser;
}

/**
 * @param {string | URL | BufferSource} [wasmInput]
 * @returns {Promise<Parser>}
 */
export function getApexParser(wasmInput) {
  return getParser("tree-sitter-apex.wasm", wasmInput);
}

/**
 * @param {string | URL | BufferSource} [wasmInput]
 * @returns {Promise<Parser>}
 */
export function getSoqlParser(wasmInput) {
  return getParser("tree-sitter-soql.wasm", wasmInput);
}

/**
 * @param {string | URL | BufferSource} [wasmInput]
 * @returns {Promise<Parser>}
 */
export function getSoslParser(wasmInput) {
  return getParser("tree-sitter-sosl.wasm", wasmInput);
}

/**
 * @param {string | URL | BufferSource} [wasmInput]
 * @returns {Promise<Parser>}
 */
export function getSflogParser(wasmInput) {
  return getParser("tree-sitter-sflog.wasm", wasmInput);
}
