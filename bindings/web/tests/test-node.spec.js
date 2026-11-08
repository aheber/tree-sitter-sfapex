import test from 'node:test';
import assert from 'node:assert/strict';

import * as tsApex from "../index.js";

test('Apex in Node', async (t) => {
  const parser = await tsApex.getApexParser();
  assert.equal('apex', parser.language.name);
});

test('SOQL in Node', async (t) => {
  const parser = await tsApex.getSoqlParser();
  assert.equal('soql', parser.language.name);
});

test('SOSL in Node', async (t) => {
  const parser = await tsApex.getSoslParser();
  assert.equal('sosl', parser.language.name);
});

test('SfLog in Node', async (t) => {
  const parser = await tsApex.getSflogParser();
  assert.equal('sflog', parser.language.name);
});