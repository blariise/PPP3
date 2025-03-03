// Try to compile those examples and see how the compiler responds.

int area(int length, int width); // calculate area of a rectangle

int main() {
  int s1 = area(7,2; // error : ) missing
  int s2 = area(7,2) // error : ; missing
  Int s3 = area(7,2); // error : Int (with a capitalized ’i’) is not a type
  int s4 = area('7,2); // error : non-ter minated character ’; terminating ’ is missing)
  return 0;
}


[blariise@arch try_this]$ clang++ -std=c++23 try_this_01.cpp 
try_this_01.cpp:6:18: error: expected ')'
    6 | int s1 = area(7,2; // error : ) missing
      |                  ^
try_this_01.cpp:6:14: note: to match this '('
    6 | int s1 = area(7,2; // error : ) missing
      |              ^
try_this_01.cpp:7:19: error: expected ';' at end of declaration
    7 | int s2 = area(7,2) // error : ; missing
      |                   ^
      |                   ;
try_this_01.cpp:9:15: warning: missing terminating ' character [-Winvalid-pp-token]
    9 | int s4 = area('7,2); // error : non-ter minated character ’; terminating ’ is missing)
      |               ^
try_this_01.cpp:9:15: error: expected expression
try_this_01.cpp:11:2: error: expected ';' at end of declaration
   11 | }
      |  ^
      |  ;
try_this_01.cpp:11:2: error: expected '}'
try_this_01.cpp:5:12: note: to match this '{'
    5 | int main() {
      |            ^
1 warning and 5 errors generated.


[blariise@arch try_this]$ g++ -std=c++23 try_this_01.cpp 
try_this_01.cpp:9:15: warning: missing terminating ' character
    9 | int s4 = area('7,2); // error : non-ter minated character ’; terminating ’ is missing)
      |               ^
try_this_01.cpp:9:15: error: missing terminating ' character
    9 | int s4 = area('7,2); // error : non-ter minated character ’; terminating ’ is missing)
      |               ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
try_this_01.cpp: In function ‘int main()’:
try_this_01.cpp:6:18: error: expected ‘)’ before ‘;’ token
    6 | int s1 = area(7,2; // error : ) missing
      |              ~   ^
      |                  )
try_this_01.cpp:8:1: error: expected ‘,’ or ‘;’ before ‘Int’
    8 | Int s3 = area(7,2); // error : Int (with a capitalized ’i’) is not a type
      | ^~~
try_this_01.cpp:10:3: error: expected primary-expression before ‘return’
   10 |   return 0;
      |   ^~~~~~
