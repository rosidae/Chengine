#ifndef INC_UTIL
  #define INC_UTIL
    bool numericalstr(const std::string& str) {
        for (char const &c : str) {
            if (std::isdigit(c) == 0) return false;
        }
        return true;
    }
#endif