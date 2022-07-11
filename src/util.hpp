#ifndef INC_UTIL
  #define INC_UTIL
  #include <fstream>
  #include <iostream>
  #include <string>
bool numericalstr(const std::string& str) {
    for (char const &c : str) {
        if (std::isdigit(c) == 0) return false;
    }
    return true;
}

std::string getversion() {
    std::ifstream vfile;
    vfile.open("../version");
    std::string version;
    vfile >> version;
    vfile.close();
    return version;
}
#endif