#include <napi.h>

typedef struct TSLanguage TSLanguage;

extern "C" TSLanguage * tree_sitter_apex();
extern "C" TSLanguage * tree_sitter_soql();
extern "C" TSLanguage * tree_sitter_sosl();
extern "C" TSLanguage * tree_sitter_sflog();

// "tree-sitter", "language" hashed with BLAKE2
const napi_type_tag LANGUAGE_TYPE_TAG = {
  0x8AF2E5212AD58ABF, 0xD5006CAD83ABBA16
};

Napi::Object Init(Napi::Env env, Napi::Object exports) {

  // Apex
  auto langObj = Napi::Object::New(env);
  langObj["name"] = Napi::String::New(env, "apex");
  auto language = Napi::External<TSLanguage>::New(env, tree_sitter_apex());
  language.TypeTag(&LANGUAGE_TYPE_TAG);
  langObj["language"] = language;

  exports["apex"] = langObj;

  // SOQL
  langObj = Napi::Object::New(env);
  langObj["name"] = Napi::String::New(env, "soql");
  language = Napi::External<TSLanguage>::New(env, tree_sitter_soql());
  language.TypeTag(&LANGUAGE_TYPE_TAG);
  langObj["language"] = language;

  exports["soql"] = langObj;

  // SOSL
  langObj = Napi::Object::New(env);
  langObj["name"] = Napi::String::New(env, "sosl");
  language = Napi::External<TSLanguage>::New(env, tree_sitter_sosl());
  language.TypeTag(&LANGUAGE_TYPE_TAG);
  langObj["language"] = language;

  exports["sosl"] = langObj;

  // SFLOG
  langObj = Napi::Object::New(env);
  langObj["name"] = Napi::String::New(env, "sflog");
  language = Napi::External<TSLanguage>::New(env, tree_sitter_sflog());
  language.TypeTag(&LANGUAGE_TYPE_TAG);
  langObj["language"] = language;

  exports["sflog"] = langObj;

  return exports;
}

NODE_API_MODULE(NODE_GYP_MODULE_NAME, Init);
