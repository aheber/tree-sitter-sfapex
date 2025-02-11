import TsParser from "web-tree-sitter";
export type Parser = TsParser;
export type {
  Options,
  Point,
  Range,
  Edit,
  Logger,
  Input,
  SyntaxNode,
  TreeCursor,
  Tree,
  QueryCapture,
  QueryMatch,
  QueryOptions,
  PredicateResult,
  Query,
  LookaheadIterable,
} from "web-tree-sitter";

declare module "web-tree-sitter-sfapex" {
  function getApexParser(): Promise<Parser>;
  function getSoqlParser(): Promise<Parser>;
  function getSoslParser(): Promise<Parser>;
  function getSflogParser(): Promise<Parser>;
}
