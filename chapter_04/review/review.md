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
 -missing semicolon: int number { 10 }
 -illegal names: int 12x { 10 };
 -calling not defined function
 -mismatched curly braces
 - incorrect for loop syntax
7.What is a type error? Give five examples.
type error is when we trying to do illegal operation on data type.
 -substract from string: std::string s1 {"helloa" - "a"};
 -assigning string to int: int x { "hello" };
 -passin wrong parameter type:
 -incorrect type for array index
 -trying to add float to int
8.What is a linker error? Give three examples.
linker error occurs when linker failed to link objects into executable
 -multiple definition of a function
 -missing object when linking
 -using function with only declaration
9.What is a logic error? Give three examples.
logic error is when program compiles and links, but produce unexpected results
 - int sum { x - y };
 - double square { x * 2};
 - double area { x + y };
10.List four potential sources of program errors discussed in the text.
 - use of complicated code sequences
 - not breaking code into small functions
 - use of bad names for variables and fucnitons
 - not testing code
11.How do you know if a result is plausible? What techniques do you have
to answer such questions?
Estimation is the answer! We can estimate what result should produce program.
12.How do you test if an input operation succeeded?
using std::cin
13.Compare and contrast having the caller of a function handle a run-time
error vs. having the called function handle the run-time error.
Caller can handle errors more flexible, but implementation is more complex for caller
14.When is throwing an exception preferable to returning an “error value”?
When an error is critical, like division by zero, and when we want to make code more readable
15.When is returning an “error value” preferable to throwing an exception?
When error is common and fucntion is called frequently (performance)
16.Describe the process of how exceptions are thrown and caught.
First we need to throw exepction when function cathc an error with keyword `throw`, then exepction look up for handler. Catch block handles an exepction.
17.Why, with a vector called v, is v[v.size()] a range error? What would be the result of calling this?
Vector size is always +1 greater than index of last element because size calculates how many values are there but index starts countin from 0, so if vector has 1 element it's size is 1 but index of last element is 0.
18.What is an assertion?
An assertion is a runtime check used in C++ to validate assumptions in the code
19.Define precondition and postcondition; give an example (that is not the area() function from this chapter, preferably a computation that requires a loop.

int sumVector(const std::vector<int>& v) {
  assert(!v.empty()); // precondition

  int sum { 0 };

  for (int num : v) {
    sum += num;
  }

  for (int num : v) {
    assert (sum >= num); // postcondition
  }
  return sum;
}

