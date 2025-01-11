# tree-sitter-sfapex

Salesforce grammars for [tree-sitter](https://github.com/tree-sitter/tree-sitter); includes Apex, SOQL, and SOSL languages. Also includes parser for the Salesforce Log files (sflog).

Try it out using our [playground](https://aheber.github.io/tree-sitter-sfapex/playground/)

If you are a Neo-vim user, the parsers and syntax highlights are part of nvim-treesitter
plugin already, [guidance](nvim-treesitter-setup.md).

## Usage

### Node

#### Install

```sh
npm install tree-sitter

npm install tree-sitter-sfapex
```

#### Example

```JavaScript
// import libraries
import Parser from "tree-sitter";
import TsSfApex from "tree-sitter-sfapex";

// create a parser instance
const parser = new Parser();
// could be .apex, .soql, or .sosl
parser.setLanguage(TsSfApex.apex);

// we set the language to Apex so lets feed it some apex
const apexTree = parser.parse(`
/**
 * block comment
 */
global class TestClass implements TestInterface {
    public static String Prop1 = 'TestVal';

    global Account setName(Account acct, String nameVal){
        acct.Name = nameVal;
        return acct;
    }
}`);

// just a super simple example of printing the discovered nodes
// to see the anonymous nodes (syntax without formal names) set this to `true`
const includeAnonymousNodes = false;

console.log("APEX TREE");
printTree(apexTree.rootNode);

// do it with some SOQL this time
parser.setLanguage(TsSfApex.soql);

const soqlTree = parser.parse(`
SELECT Id, Name, Parent.Name,
    TYPEOF Owner
        WHEN User THEN Id, Username, FederationId
        WHEN Group THEN Name
    END,
    (SELECT Id, Name FROM Contacts)
FROM Account
WHERE Name = 'Robots' AND Are_Coming__c = FALSE
`);

console.log("SOQL TREE");
printTree(soqlTree.rootNode);

function printTree(node, indent = 0) {
  console.log(
    " ".repeat(indent),
    (node.isNamed ? "(" : "") + node.type + (node.isNamed ? ")" : "")
  );
  for (let c of includeAnonymousNodes ? node.children : node.namedChildren) {
    printTree(c, indent + 2);
  }
}

```

### Rust

#### Install

```sh
cargo add tree-sitter

cargo add tree-sitter-sfapex
```

#### Example

```Rust
use tree_sitter::{Parser, TreeCursor};

// just a super simple example of printing the discovered nodes
// to see the anonymous nodes (syntax without formal names) set this to `true`
const INCLUDE_ANONYMOUS_NODES: bool = true;

fn main() {
    let mut parser = Parser::new();

    let language_fn = tree_sitter_sfapex::apex::LANGUAGE;
    parser.set_language(&language_fn.into()).unwrap();

    let source_code = r#"
/**
 * block comment
 */
global class TestClass implements TestInterface {
    public static String Prop1 = 'TestVal';

    global Account setName(Account acct, String nameVal){
        acct.Name = nameVal;
        return acct;
    }
}"#;
    let tree = parser.parse(source_code, None).unwrap();


    println!("APEX TREE");
    print_tree(&mut tree.root_node().walk(), INCLUDE_ANONYMOUS_NODES, 0);

    // do it with some SOQL this time
    let language_fn = tree_sitter_sfapex::soql::LANGUAGE;
    parser.set_language(&language_fn.into()).unwrap();

    let soql_source_code = r#"
SELECT Id, Name, Parent.Name,
    TYPEOF Owner
        WHEN User THEN Id, Username, FederationId
        WHEN Group THEN Name
    END,
    (SELECT Id, Name FROM Contacts)
FROM Account
WHERE Name = 'Robots' AND Are_Coming__c = FALSE"#;

    let tree = parser.parse(soql_source_code, None).unwrap();

    println!("SOQL TREE");
    print_tree(&mut tree.root_node().walk(), INCLUDE_ANONYMOUS_NODES, 0);

}

fn print_tree(cursor: &mut TreeCursor, include_anonymous_nodes: bool, indent: usize) {
    let t_node = cursor.node();
    println!("{}{}{}{}", " ".repeat(indent),
    (if t_node.is_named()  {"("} else {"\""}).to_owned(),
    t_node.kind(),
    (if t_node.is_named() {")"} else {"\""}).to_owned());

    if cursor.goto_first_child() {
        loop {
            if cursor.node().is_named() || include_anonymous_nodes {
                print_tree(cursor, include_anonymous_nodes, indent + 2);
            }
            if !cursor.goto_next_sibling() {
                break;
            }
        }
        // when we're done here, go up to the parent again
        cursor.goto_parent();
    }
}
```

## Status

Most of the parsers are built and tested on large corpus of Apex, I still intend to write automated tests that parse large Apex libraries as part of evaluating the grammar.

### Apex

- [x] grammar
- [x] grammar tests
- [x] highlighting queries
- [x] highlighting tests
- [x] tags queries
- [x] tags tests (could use more)
- [x] locals queries
- [x] locals tests (using highlighting)

### Anonymous Apex

- [x] grammar
- [x] grammar tests
- [x] highlighting queries
- [x] highlighting tests
- [x] tags queries
- [x] tags tests (could use more)
- [x] locals queries
- [x] locals tests (using highlighting)

### SOQL

- [x] grammar
- [x] grammar tests
- [x] highlighting queries
- [x] highlighting tests

### SOSL

- [x] grammar
- [x] grammar tests
- [x] highlighting queries
- [x] highlighting tests

### SFLOG

Contributed by @finxxi, the sflog parser is very new and still being figured out. Feel free to contribute logs that fail to parse via the issues or by adding a failing test. I expect it to have a lot of development in terms of comprehention of individual log patterns and pulling out the types present there. For now it generally handles the main structure of log entries but doesn't parse the logged details very finely.

- [x] grammar
- [ ] grammar tests (wip)
- [ ] highlighting queries (wip)
- [ ] highlighting tests

## Questions/Issues

Please open an issue on this repo and we'll work through it.

## Contributing

Still figuring this out. By far the most useful contributions would be tests, if you have a scenario that doesn't work you can just provide the example or open a PR with a new failing test and I can figure out what to do about it.
