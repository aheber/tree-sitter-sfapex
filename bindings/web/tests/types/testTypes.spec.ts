import {getApexParser} from "../../index.js";

const parser = await getApexParser();
console.log(parser.language!.name);