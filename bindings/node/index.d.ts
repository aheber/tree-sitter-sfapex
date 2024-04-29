declare interface NodeType {
  type: string;
  named: boolean;
  subtypes: NodeType[] | undefined;
}

declare interface Language {
  name: string;
  nodeTypeInfo: NodeType[];
}

declare const TsSfApex: {
  apex: Language;
  soql: Language;
  sosl: Language;
};

export default TsSfApex;
