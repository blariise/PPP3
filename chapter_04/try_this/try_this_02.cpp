/*
Try to compile those examples and see how the compiler responds. Try thinking of
a few more errors yourself and try those.
*/
#include <iostream>

int main() {
  int x0 = arena(7,2); // error : undeclared function
  int x1 = area(7); // error : wrong number of arguments
  int x2 = area("seven",2); // error : 1st argument has a wrong type
  int x3 = area;
  std::cin >> area(2, 5);
  return 0;
}

/*
[blariise@arch try_this]$ g++ -std=c++23 try_this_02.cpp 
try_this_02.cpp: In function ‘int main()’:
try_this_02.cpp:8:12: error: ‘arena’ was not declared in this scope
    8 |   int x0 = arena(7,2); // error : undeclared function
      |            ^~~~~
try_this_02.cpp:9:12: error: ‘area’ was not declared in this scope
    9 |   int x1 = area(7); // error : wrong number of arguments
*/
