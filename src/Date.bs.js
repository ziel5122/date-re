// Generated by BUCKLESCRIPT VERSION 3.1.5, PLEASE EDIT WITH CARE
'use strict';

var Block = require("bs-platform/lib/js/block.js");
var Curry = require("bs-platform/lib/js/curry.js");
var Printf = require("bs-platform/lib/js/printf.js");

function print(d) {
  return Curry._4(Printf.printf(/* Format */[
                  /* Int */Block.__(4, [
                      /* Int_d */0,
                      /* No_padding */0,
                      /* No_precision */0,
                      /* Char_literal */Block.__(12, [
                          /* " " */32,
                          /* Int */Block.__(4, [
                              /* Int_d */0,
                              /* No_padding */0,
                              /* No_precision */0,
                              /* Char_literal */Block.__(12, [
                                  /* " " */32,
                                  /* Int */Block.__(4, [
                                      /* Int_d */0,
                                      /* No_padding */0,
                                      /* No_precision */0,
                                      /* Char_literal */Block.__(12, [
                                          /* " " */32,
                                          /* Int */Block.__(4, [
                                              /* Int_d */0,
                                              /* No_padding */0,
                                              /* No_precision */0,
                                              /* Char_literal */Block.__(12, [
                                                  /* "\n" */10,
                                                  /* End_of_format */0
                                                ])
                                            ])
                                        ])
                                    ])
                                ])
                            ])
                        ])
                    ]),
                  "%d %d %d %d\n"
                ]), d[/* year */0], d[/* monthIndex */2], d[/* day */3], d[/* hour */4]);
}

function timeDifference(_, _$1) {
  return /* () */0;
}

exports.print = print;
exports.timeDifference = timeDifference;
/* No side effect */
