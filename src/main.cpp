#include <iostream>
#include <string>
#include "uci/ucio.hpp"
#include "uci/uciloop.hpp"
#include "chess/fen.hpp"
#include "chess/board.hpp"

int main() {
    uciloop();
    for(int i = 0; i < defaultboard.pbb.size(); i++) {
        if(i==0) {
            std::cout << "|";
        }
        std::cout << charfrompiece(defaultboard.pbb[i]) << " ";
        if(i % 8 == 7) {
            std::cout << "|";
            std::cout << "\n";
            if(i!=63) std::cout << "|";
        }
        
    }
    return 0;
}