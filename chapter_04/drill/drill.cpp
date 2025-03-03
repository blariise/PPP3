#include "../../PPPheaders.h"

int main() {
  try {
    cout << "Success!\n"; // 1
    cout << "Success!\n"; // 2
    cout << "Success" << "!\n"; // 3
    cout << "Success!" << '\n'; // 4
    int res = 7;          // 5
    vector<int> v(10);
    v[5] = res;
    cout << "Success!\n";

    vector<int> v2(10);   // 6
    v2[5] = 7;
    if (v2[5]!=7)
      cout << "Success!\n";
    
    if (cin)                  // 7
      cout << "Success!\n";
    else
      cout << "Fail!\n";

    bool c = true;         // 8
    if (c)
      cout << "Success!\n";
    else
      cout << "Fail!\n";

    string s = "ape";     // 9
    bool c2 = "fool";
    if (c2)
      cout << "Success!\n";

    string s2 = "ape";      // 10
    if (s2!="fool")
      cout << "Success!\n";

    string s3 = "ape";
    if (s!="fool")
      cout << "Success!\n";  // 11

    string s4 = "ape";      // 12
    if (s4 != "fool")
      cout << "Success!\n";

    vector<char> v3(5);      // 13
    for (int i = 0; i < v.size(); ++i)
      cout << "Success!\n";

    vector<char> v4(5);       // 14
    for (int i = 0; i < v.size(); ++i)
      cout << "Success!\n";

    string s5 = "Success!\n";   // 15
    for (int i = 0; i < s5.size(); ++i)
      cout << s5[i];

    if (true)       // 16
      cout << "Success!\n";
    else
      cout << "Fail!\n";

    int x = 2000;     // 17
    int c3 = x;
    if (c3 == 2000)
      cout << "Success!\n";

    string s6 = "Success!\n";       // 18
    for (int i = 0; i < s6.size(); ++i)
      cout << s6[i];

    vector<int> v5(5);                // 19
    for (int i = 0; i<=v.size(); ++i)
      cout << "Success!\n";

    int i = 0;          // 20
    int j = 9;
    while (i<10)
      ++i;
    if (j < i)
      cout << "Success!\n";

    int x2 = 2;         // 21
    double d = 5 - (x2 - 2) - 0.5;
    if (d==2*x2+0.5)
      cout << "Success!\n";

    string s7 = "Success!\n";     // 22
    for (int i = 0; i < s7.size(); ++i)
      cout << s7[i];

    int i2 = 0;         // 23
    while (i2 < 10)
      ++i2;
    if (10 == i2)
      cout << "Success!\n";

    int x3 = 4;             // 24
    double d2 = 5 / (x3-2);
    if (d2 < 2*x3+0.5)
      cout << "Success!\n";

    cout << "Success!\n";     // 25
    return 0;
  }
  catch (exception& e) {
    cerr << "error: " << e.what() << '\n';
    return 1;
  }
  catch (...) {
    cerr << "Oops: unknown exception!\n";
    return 2;
  }
  return 0;
}

