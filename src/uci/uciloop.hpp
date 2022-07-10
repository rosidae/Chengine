#include "uciio.hpp"
#include <iostream>
#include <string>
#include <vector>

void uciloop() {
    std::string gui = "";
    bool uciok = false;
    while(1) {
        std::getline(std::cin, gui);
        std::vector<std::string> sgui = split(gui, " ");
        std::string fgui = sgui[0];
        if(fgui == "uci") {
            if(!uciok) {
                uprint("id name Chengine");
                uprint("id author Samuel K (Rosidae)");
                uprint("uciok");
                uciok = true;
            } else {
                uprint("uciok");
                uprint("info string (you have already specified a uci format?)");
            }
        }
        if(fgui == "isready") {
            if(uciok) uprint("readyok");
        }
        if(fgui == "go") {
            uprint("bestmove d7d5");
        }
        if(fgui == "quit") {
            break;
        }
    }
}