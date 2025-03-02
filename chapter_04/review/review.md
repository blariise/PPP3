1.Name four major types of errorrs and briefly define each one.
a) compile-time errors - violating grammar of c++.
b) run-time errors - when program is executed and occur crash.
c) link-time errors - when source code is compiled but failed to link object files.
d) logical errors - when program runs but output wrong results.
2.What kinds of errors can we ignore in student programs?
logical errors
3.What guarantees should every completed project offer?
producing result that user expect.
4.List three approaches we can take to eliminate errors in programs and produce acceptable
software.
a) estimate potential result of program. If estimation and result dont match we have to debug.
b) Test parameters and result of code.
c) separate source of of errors and debug immediately.
5.Why do we hate debugging?
Debugging is hard and long process, because we have to figure out why program doesn't work properly.
Probably we have to read many lines of code and test them separately, that is why testing is so important.
6.What is a syntax error? Give five examples.
syntax error is when programmer violates grammar of programming language.
 -forgot to place semicolon: int number { 10 }
 -illegal names: int 12x { 10 };
7.What is a type error? Give five examples.
type error is when we trying to do illegal operation on data type.
 -substract from string: std::string s1 {"helloa" - "a"};
