#include "uciio.hpp"
#include <iostream>
#include <string>

void uciloop() {
    std::string gui = "";
    bool uciok = false;
    while(1) {
        std::cin >> gui;
        if(gui == "uci") {
            uprint("id name Chengine");
            uprint("id author Samuel K");
            uprint("uciok");
            uciok = true;
        }
        if(gui == "isready") {
            if(uciok) uprint("readyok");
        }
        if(gui == "go depth 15") {
            uprint("info score cp -95 depth 1 nodes 100000");
            uprint("bestmove d7d5");
        }
    }
}