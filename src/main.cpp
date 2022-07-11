#include <iostream>
#include <string>
#include "uci/ucio.hpp"
#include "uci/uciloop.hpp"
#include "chess/fen.hpp"

int main() {
    uciloop();
    parse_fen("8/5k2/3p4/1p1Pp2p/pP2Pp1P/P4P1K/8/8 b - - 99 50");
    return 0;
}