#ifndef INC_UCILOOP
  #define INC_UCILOOP
#include "uciio.hpp"
#include <iostream>
#include <string>
#include <vector>
#include "../util.hpp"

void uciloop() {
    std::string gui = "";
    bool uciok = false;
    while(1) {
        std::getline(std::cin, gui);
        std::vector<std::string> sgui = split(gui, " ");
        std::string fgui = sgui[0];
        int depth = 10;
        if(fgui == "uci") {
            if(!uciok) {
                uprint("id name Chengine");
                uprint("id author Samuel K (Rosidae)");
                uprint("uciok");
                uciok = true;
            } else {
                uprint("info string (you have already specified a uci format?)");
                break;
            }
        }
        if(fgui == "isready") {
            if(uciok) uprint("readyok");
        }
        if(fgui == "go") {
            if(sgui[1] == "depth") {
                if(numericalstr(sgui[2])) {
                    depth = std::stoi(sgui[2]);
                } else {
                    uprint("info string invalid depth parameter, must be a number");
                }
            }
            uprint("bestmove d7d5");
        }
        if(fgui == "quit") {
            break;
        }
    }
}
#endif