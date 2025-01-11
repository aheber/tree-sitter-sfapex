fn main() {
    let root_dir = std::path::Path::new(".");
    let apex_dir = root_dir.join("apex").join("src");
    let soql_dir = root_dir.join("soql").join("src");
    let sosl_dir = root_dir.join("sosl").join("src");
    let sflog_dir = root_dir.join("sflog").join("src");

    let mut config = cc::Build::new();
    config.include(&apex_dir); // why only one language here?
    config
        .flag_if_supported("-std=c11")
        .flag_if_supported("-Wno-unused-parameter");

    for path in &[
        apex_dir.join("parser.c"),
        soql_dir.join("parser.c"),
        sosl_dir.join("parser.c"),
        sflog_dir.join("parser.c"),
    ] {
        config.file(path);
        println!("cargo:rerun-if-changed={}", path.to_str().unwrap());
    }

    config.compile("tree-sitter-sfapex");
}