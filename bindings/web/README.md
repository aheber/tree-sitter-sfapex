# web-tree-sitter-sfapex

Salesforce grammars for [tree-sitter](https://github.com/tree-sitter/tree-sitter); includes Apex, SOQL, and SOSL languages. Also includes parser for the Salesforce Log files (sflog).

Try it out using our [playground](https://aheber.github.io/tree-sitter-sfapex/playground/)

## Usage

#### Install

```sh
npm install web-tree-sitter-sfapex
```

#### Example

```JavaScript
import { getApexParser, getSoqlParser } from "web-tree-sitter-sfapex";

// create a parser instance
let parser = await getApexParser();

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
parser = await getSoqlParser();

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

## Contributing

Still figuring this out. By far the most useful contributions would be tests, if you have a scenario that doesn't work you can just provide the example or open a PR with a new failing test and I can figure out what to do about it.
