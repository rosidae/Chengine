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

template <typename T> std::vector<T> slice(std::vector<T> v, int start, int end) {
    std::vector<T> ret;
    for (int i = start; i < end; i++) {
        ret.push_back(v[i]);
    }
    return ret;
}
#endif