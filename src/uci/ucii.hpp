#ifndef INC_UCII
    #define INC_UCII
#include <iostream>
#include <string>
#include <vector>
#include "ucio.hpp"
std::vector<std::string> split(std::string cmd, std::string delim) {
    std::vector<std::string> ret;
    size_t pos = 0;
    std::string token;
    while ((pos = cmd.find(delim)) != std::string::npos) {
        token = cmd.substr(0, pos);
        ret.push_back(token);
        cmd.erase(0, pos + delim.length());
    }
    ret.push_back(cmd);
    return ret;
}
#endif