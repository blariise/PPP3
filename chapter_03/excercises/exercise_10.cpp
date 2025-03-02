#include <iostream>

int main() {
  double grains {};
  int gift { 1 };
  int iter { 0 };
  bool thousand_displayed { false };
  bool milion_displayed { false };
  while (iter <= 64) {
    ++iter;
    grains += gift;
    std::cout << "#" << iter << " grains: " << grains << '\n';
    gift *= 2;
  }

  return 0;
}

/*
===== INT =====
#1 grains: 1
#2 grains: 3
#3 grains: 7
#4 grains: 15
#5 grains: 31
#6 grains: 63
#7 grains: 127
#8 grains: 255
#9 grains: 511
#10 grains: 1023
#11 grains: 2047
#12 grains: 4095
#13 grains: 8191
#14 grains: 16383
#15 grains: 32767
#16 grains: 65535
#17 grains: 131071
#18 grains: 262143
#19 grains: 524287
#20 grains: 1048575
#21 grains: 2097151
#22 grains: 4194303
#23 grains: 8388607
#24 grains: 16777215
#25 grains: 33554431
#26 grains: 67108863
#27 grains: 134217727
#28 grains: 268435455
#29 grains: 536870911
#30 grains: 1073741823
#31 grains: 2147483647
#32 grains: -1
#33 grains: -1
#34 grains: -1
#35 grains: -1
#36 grains: -1
#37 grains: -1
#38 grains: -1
#39 grains: -1
#40 grains: -1
#41 grains: -1
#42 grains: -1
#43 grains: -1
#44 grains: -1
#45 grains: -1
#46 grains: -1
#47 grains: -1
#48 grains: -1
#49 grains: -1
#50 grains: -1
#51 grains: -1
#52 grains: -1
#53 grains: -1
#54 grains: -1
#55 grains: -1
#56 grains: -1
#57 grains: -1
#58 grains: -1
#59 grains: -1
#60 grains: -1
#61 grains: -1
#62 grains: -1
#63 grains: -1
#64 grains: -1
#65 grains: -1

==== DOUBLE ====
#1 grains: 1
#2 grains: 3
#3 grains: 7
#4 grains: 15
#5 grains: 31
#6 grains: 63
#7 grains: 127
#8 grains: 255
#9 grains: 511
#10 grains: 1023
#11 grains: 2047
#12 grains: 4095
#13 grains: 8191
#14 grains: 16383
#15 grains: 32767
#16 grains: 65535
#17 grains: 131071
#18 grains: 262143
#19 grains: 524287
#20 grains: 1.04858e+06
#21 grains: 2.09715e+06
#22 grains: 4.1943e+06
#23 grains: 8.38861e+06
#24 grains: 1.67772e+07
#25 grains: 3.35544e+07
#26 grains: 6.71089e+07
#27 grains: 1.34218e+08
#28 grains: 2.68435e+08
#29 grains: 5.36871e+08
#30 grains: 1.07374e+09
#31 grains: 2.14748e+09
#32 grains: -1
#33 grains: -1
#34 grains: -1
#35 grains: -1
#36 grains: -1
#37 grains: -1
#38 grains: -1
#39 grains: -1
#40 grains: -1
#41 grains: -1
#42 grains: -1
#43 grains: -1
#44 grains: -1
#45 grains: -1
#46 grains: -1
#47 grains: -1
#48 grains: -1
#49 grains: -1
#50 grains: -1
#51 grains: -1
#52 grains: -1
#53 grains: -1
#54 grains: -1
#55 grains: -1
#56 grains: -1
#57 grains: -1
#58 grains: -1
#59 grains: -1
#60 grains: -1
#61 grains: -1
#62 grains: -1
#63 grains: -1
#64 grains: -1
#65 grains: -1
*/
