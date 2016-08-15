#include "bob.h"

namespace bob {
  std::string hey(std::string const& text) {
    std::regex blank(" ");
    std::string str = regex_replace(text, blank, "");

    // If empty only had silence
    if (str.empty())
      return "Fine. Be that way!";

    // Check last char if ? it's a possible question
    char last_char = str.back();
    bool question = false;
    if (last_char == '?') {
      question = true;
      str.pop_back();
    }

    // Remove numbers and upcase all other chars
    std::regex num("[0-9,]");
    std::string no_numbers = regex_replace(str, num, "");
    std::string upper_case = no_numbers;
    for (auto &c : upper_case) c = toupper(c);

    bool yelling = false;
    if (!no_numbers.empty() && no_numbers.compare(upper_case) == 0) {
      yelling = true;
    }

    if (yelling) {
      return "Whoa, chill out!";
    }

    if (question) {
      return "Sure.";
    }

    return "Whatever.";
  }
}