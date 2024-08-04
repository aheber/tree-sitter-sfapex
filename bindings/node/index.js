const root = require("path").join(__dirname, "..", "..");

module.exports = require("node-gyp-build")(root);

module.exports.apex.nodeTypeInfo = require("../../apex/src/node-types.json");
module.exports.soql.nodeTypeInfo = require("../../soql/src/node-types.json");
module.exports.sosl.nodeTypeInfo = require("../../sosl/src/node-types.json");
module.exports.sflog.nodeTypeInfo = require("../../sflog/src/node-types.json");
