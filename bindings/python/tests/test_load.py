import tree_sitter_sfapex
from tree_sitter import Language, Parser

parser = Parser(Language(tree_sitter_sfapex.language_apex()))
assert not parser.parse(b"public class Foo { }").root_node.has_error

parser = Parser(Language(tree_sitter_sfapex.language_soql()))
assert not parser.parse(b"SELECT Id FROM Account").root_node.has_error

parser = Parser(Language(tree_sitter_sfapex.language_sosl()))
assert not parser.parse(b"FIND {Acme} IN ALL FIELDS RETURNING Account(Id)").root_node.has_error

parser = Parser(Language(tree_sitter_sfapex.language_sflog()))
log = b"37.0 APEX_CODE,FINEST\nExecute Anonymous: x;\n16:06:58.0 (1)|EXECUTION_STARTED\n"
assert not parser.parse(log).root_node.has_error

print("All four parsers OK")
