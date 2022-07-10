#include "uciio.hpp"
#include <iostream>
#include <string>

void uciloop() {
    std::string gui = "";
    bool uciok = false;
    while(true) {
        std::cin >> gui;
        if(gui == "uci") {
            uprint("id name Chengine");
            uprint("id author Samuel K");
            uprint("uciok");
            uciok=!uciok;
        }
        if(!uciok) {
            break;
        }
        
    }
}