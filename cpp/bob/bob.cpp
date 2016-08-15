#include "bob.h"

namespace bob {
  std::string hey(std::string const& text) {
    std::regex reg1("[0-9 ,?]");
    std::string result = regex_replace(text, reg1, "");

    std::string upper_case = result;
    for (auto &c : upper_case) c = toupper(c);

    bool numbers = false;
    bool yelling = false;
    if (result.empty()) {
      numbers = true;
    } else if (result.compare(upper_case) == 0) {
      yelling = true;
    }

    char last_char = text.back();
    bool question = false;
    if (last_char == '?') {
      question = true;
    }

    if (yelling && !numbers) {
      return "Whoa, chill out!";
    }

    if (question) {
      return "Sure.";
    }

    return "Whatever.";
  }
}