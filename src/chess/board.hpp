#ifndef INC_BOARD
  #define INC_BOARD
#include <vector>
#include "fen.hpp"

class board {
public:
    board() {}
    std::vector<int> pbb;
    bool wsc = true;
    bool wlc = true;
    bool bsc = true;
    bool blc = true;
    bool hmclock = 0;
    int fmclock = 1;
};

board defaultboard = parse_fen("rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1");
#endif