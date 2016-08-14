#include "bob.h"

namespace bob {
  std::string hey(std::string const& text) {
    if (text.back() == '!') {
      return "Whoa, chill out!";
    }
    return "Whatever.";
  }
}