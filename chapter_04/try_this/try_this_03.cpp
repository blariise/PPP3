/*
Test this program with a variety of values. Print out the values of area1, area2, area3,
and ratio. Insert more tests until all errors are caught. How do you know that you
caught all errors? This is not a trick question. In this particular example, you can
give a valid argument for having caught all errors.
*/
#include <iostream>
#include "../../PPPheaders.h"

int area(int length, int width) {
// calculate area of a rectangle;
// retur n -1 to indicate a bad argument

  if (length<=0 || width <=0)
    return -1;
  return length * width;
}

int framed_area(int x, int y) {
// calculate area within frame

  constexpr int frame_width = 2;
  if (x - frame_width<=0 || y - frame_width<=0)
    error("non−positive area() argument called by framed_area()");
  return area(x - frame_width,y - frame_width);
}

void f(int x, int y, int z) {
  int area1 = area(x,y);
  if (area1<=0)
    error("non−positive area");
  //int area2 = framed_area(1,z);
  int area3 = framed_area(y,z);
  double ratio = double(area1)/area3;
  //std::cout << area2 << '\n';
  std::cout << area3 << '\n';
  std::cout << ratio << '\n';
}

int main() {
  f(4, 5, 7);
  return 0;
}
