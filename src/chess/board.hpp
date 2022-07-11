#ifndef INC_BOARD
  #define INC_BOARD
#include <vector>
#include "fen.hpp"
struct square {
    int x;
    int y;
    bool color;
    square(int x, int y) {
        this->x = x;
        this->y = y;
    }
    square(){}
};
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
    square getsquarepos(int pos) {
        square sq(pos % 8, pos / 8);
        sq.color = sq.y % 2 == 0 ? true : false;
        return sq;
    }
};

board defaultboard = parse_fen("rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1");
#endif