#include "../../PPPheaders.h"

int main() {
  vector<string> legal_names {
  "Mon",
  "mon",
  "monday",
  "Monday",
  "Tuesday",
  "tuesday",
  "Tues",
  "tues",
  "Wednesday",
  "wednesday",
  "Midweek",
  "midweek",
  "Wed",
  "wed",
  "Thursday",
  "thursday",
  "Th",
  "th",
  "Friday",
  "friday",
  "Fri",
  "fri",
  "Saturday",
  "saturday",
  "Sabbatum",
  "sabbatum",
  "Sat",
  "sat",
  "Sunday",
  "sunday",
  "Sun",
  "sun"
  };
  
  int sum { 0 };

  int illegal_days { 0 };
  string day {};
  int value {};
  bool is_legal { false };
  while(std::cin >> day >> value) {
    for (const auto& name : legal_names) {
      if (name == day) {
        is_legal = true;
        sum += value;
      }
    }
    if (!is_legal)
      ++illegal_days;
  }

  std::cout << "Rejected values: " << illegal_days << '\n';
  return 0;
}
