#ifndef night
#define night
#include <iostream>
inline
std::string goodnight1(std::string thing1) {
  return "Goodnight, " + thing1 + ".\n";
}

inline
std::string goodnight2(std::string thing1, std::string thing2) {
  return "Goodnight, " + thing1 + " jumping over the " + thing2 + ".\n";
}
#endif