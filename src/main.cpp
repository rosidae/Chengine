#include <iostream>
#include <string>
#include "uci/ucio.hpp"

int main() {
    std::string gui = "";
    while(true) {
        std::cin >> gui;
        if(gui == "uci") {
            uprint("id name Chengine");
            uprint("id author Samuel K");
            uprint("uciok");
        }
    }
    return 0;
}