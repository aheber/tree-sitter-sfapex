{
  "targets": [
    {
      "target_name": "tree_sitter_sfapex_binding",
      "dependencies": [
        "<!(node -p \"require('node-addon-api').targets\"):node_addon_api_except",
      ],
      "include_dirs": [
        "apex/src"
      ],
      "sources": [
        "apex/src/parser.c",
        "soql/src/parser.c",
        "sosl/src/parser.c",
        "sflog/src/parser.c",
        "bindings/node/binding.cc",
        # If your language uses an external scanner, add it here.
      ],
      "cflags_c": [
        "-std=c11",
      ],
      'variables' : {
        'openssl_fips': '',
      }
    }
  ]
}
