"use strict";
const dialects = { SOQL: "soql", SOSL: "sosl", APEX: "apex" };

function createCaseInsensitiveRegex(word) {
  return new RegExp(
    word
      .split("")
      .map((letter) => `[${letter.toLowerCase()}${letter.toUpperCase()}]`)
      .join("")
  );
}

function ci(keyword) {
  const words = keyword.split(" ");
  const regExps = words
    .map(createCaseInsensitiveRegex)
    .flatMap((value, index, array) =>
      array.length - 1 !== index // check for the last item
        ? [value, /[\s\n]+/]
        : value
    );

  return regExps.length == 1
    ? alias(token(regExps[0]), keyword)
    : alias(token(seq(...regExps)), words.join("_"));
}

function commaJoined(expression) {
  return optional(commaJoined1(expression));
}

function commaJoined1(expression) {
  return joined(",", expression);
}

function joined(joinedBy, expression) {
  return seq(expression, repeat(seq(joinedBy, expression)));
}

module.exports = { ci, commaJoined, commaJoined1, joined, dialects };
