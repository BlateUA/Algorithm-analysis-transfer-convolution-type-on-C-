# Algorithm-analysis-transfer-convolution-type-on-C-++. Discrete math course project.

Input: string with symbols: (,),*,+,а.

Output: Algorithm analysis transfer convolution type. Is a string in grammar G0 with rules: E->E+T, E->T, T->T*F, T->F, F->(E), F->a.

Floyd-Evans language analyser was taken as a base for my project.

Function L0-L11 is the same as operators from Floyd-Evans language analyser.

Function start is starting a project and initializating variables.

String input - a variable for an input data.

Int i - indicator for input.

String temp - temporary variable to contain sth.

Program is using recursive method.
