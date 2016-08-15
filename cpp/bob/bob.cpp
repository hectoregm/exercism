#include "bob.h"

namespace bob {
  std::string hey(std::string const& text) {
    std::string upper_case = text;

    for (auto &c : upper_case) c = toupper(c);

    if (text.compare(upper_case) == 0) {
      return "Whoa, chill out!";
    } else if (text.back() == '?') {
      return "Sure.";
    }
    return "Whatever.";
  }
}