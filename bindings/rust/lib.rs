//! This crate provides Salesforce Apex, SOQL, SOSL, and Log syntax support for the [tree-sitter] parsing library.
//!
//! Typically, you will use the [apex::LANGUAGE] constant to add this language to a
//! tree-sitter [Parser], and then use the parser to parse some code:
//!
//! ```
//! use tree_sitter::Parser;
//!
//! let code = r#"
//! public class Test123 {
//!   public Test123(){}
//! }
//! "#;
//! let mut parser = Parser::new();
//! let language_fn = tree_sitter_sfapex::apex::LANGUAGE;
//! parser
//!     .set_language(&language_fn.into())
//!     .expect("Error loading Apex parser");
//! let tree = parser.parse(code, None).unwrap();
//! assert!(!tree.root_node().has_error());
//! ```
//!
//! [Parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html
//! [tree-sitter]: https://tree-sitter.github.io/

pub mod apex {
    use tree_sitter_language::LanguageFn;
    extern "C" {
        fn tree_sitter_apex() -> *const ();
    }

    /// Returns the tree-sitter [LanguageFn] for this grammar.
    ///
    /// [LanguageFn]: https://docs.rs/tree-sitter-language/*/tree_sitter_language/struct.LanguageFn.html
    pub const LANGUAGE: LanguageFn = unsafe { LanguageFn::from_raw(tree_sitter_apex) };

    /// The content of the [`node-types.json`] file for this grammar.
    ///
    /// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
    pub const NODE_TYPES: &str = include_str!("../../apex/src/node-types.json");

    /// The syntax highlighting query for this language.
    pub const HIGHLIGHTS_QUERY: &str = include_str!("../../apex/queries/highlights.scm");

    // /// The injections query for this language.
    // pub const INJECTIONS_QUERY: &str = include_str!("../../apex/queries/injections.scm");

    /// The symbol tagging query for this language.
    pub const TAGS_QUERY: &str = include_str!("../../apex/queries/tags.scm");
}

pub mod soql {
    use tree_sitter_language::LanguageFn;
    extern "C" {
        fn tree_sitter_soql() -> *const ();
    }

    /// Returns the tree-sitter [LanguageFn] for this grammar.
    ///
    /// [LanguageFn]: https://docs.rs/tree-sitter-language/*/tree_sitter_language/struct.LanguageFn.html
    pub const LANGUAGE: LanguageFn = unsafe { LanguageFn::from_raw(tree_sitter_soql) };

    /// The content of the [`node-types.json`] file for this grammar.
    ///
    /// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
    pub const NODE_TYPES: &str = include_str!("../../soql/src/node-types.json");

    /// The syntax highlighting query for this language.
    pub const HIGHLIGHTS_QUERY: &str = include_str!("../../soql/queries/highlights.scm");

    // /// The injections query for this language.
    // pub const INJECTIONS_QUERY: &str = include_str!("../../soql/queries/injections.scm");

    // /// The symbol tagging query for this language.
    // pub const TAGS_QUERY: &str = include_str!("../../soql/queries/tags.scm");
}

pub mod sosl {
    use tree_sitter_language::LanguageFn;
    extern "C" {
        fn tree_sitter_sosl() -> *const ();
    }

    /// Returns the tree-sitter [LanguageFn] for this grammar.
    ///
    /// [LanguageFn]: https://docs.rs/tree-sitter-language/*/tree_sitter_language/struct.LanguageFn.html
    pub const LANGUAGE: LanguageFn = unsafe { LanguageFn::from_raw(tree_sitter_sosl) };

    /// The content of the [`node-types.json`] file for this grammar.
    ///
    /// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
    pub const NODE_TYPES: &str = include_str!("../../sosl/src/node-types.json");

    /// The syntax highlighting query for this language.
    pub const HIGHLIGHTS_QUERY: &str = include_str!("../../sosl/queries/highlights.scm");

    // /// The injections query for this language.
    // pub const INJECTIONS_QUERY: &str = include_str!("../../sosl/queries/injections.scm");

    // /// The symbol tagging query for this language.
    // pub const TAGS_QUERY: &str = include_str!("../../sosl/queries/tags.scm");
}

pub mod sflog {
    use tree_sitter_language::LanguageFn;
    extern "C" {
        fn tree_sitter_sflog() -> *const ();
    }

    /// Returns the tree-sitter [LanguageFn] for this grammar.
    ///
    /// [LanguageFn]: https://docs.rs/tree-sitter-language/*/tree_sitter_language/struct.LanguageFn.html
    pub const LANGUAGE: LanguageFn = unsafe { LanguageFn::from_raw(tree_sitter_sflog) };

    /// The content of the [`node-types.json`] file for this grammar.
    ///
    /// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
    pub const NODE_TYPES: &str = include_str!("../../sflog/src/node-types.json");

    /// The syntax highlighting query for this language.
    pub const HIGHLIGHTS_QUERY: &str = include_str!("../../sflog/queries/highlights.scm");

    // /// The injections query for this language.
    // pub const INJECTIONS_QUERY: &str = include_str!("../../sflog/queries/injections.scm");

    // /// The symbol tagging query for this language.
    // pub const TAGS_QUERY: &str = include_str!("../../sflog/queries/tags.scm");
}

#[cfg(test)]
mod tests {
    use tree_sitter::Parser;

    // Helper function to test language loading
    fn test_language_loading(language_fn: tree_sitter_language::LanguageFn) {
        let mut parser = Parser::new();
        parser
            .set_language(&language_fn.into())
            .expect("Failed to load language parser");
    }

    #[test]
    fn test_can_load_apex_grammar() {
        test_language_loading(super::apex::LANGUAGE);
    }

    #[test]
    fn test_can_load_soql_grammar() {
        test_language_loading(super::soql::LANGUAGE);
    }

    #[test]
    fn test_can_load_sosl_grammar() {
        test_language_loading(super::sosl::LANGUAGE);
    }

    #[test]
    fn test_can_load_sflog_grammar() {
        test_language_loading(super::sflog::LANGUAGE);
    }
}