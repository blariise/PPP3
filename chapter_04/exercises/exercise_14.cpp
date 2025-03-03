#include "../../PPPheaders.h"

int main() {
  std::vector<std::string> legal_names {
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
  
  std::vector<int> values {};

  std::string day {};
  int value {};
  while(std::cin >> day >> value) {
    for (const auto& name : legal_names) {
      if (name == day) {
      }
    }
  }


  return 0;
}
