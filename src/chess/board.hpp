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
        sq.x++;
        sq.y++;
        return sq;
    }
    int getpiecefromsquare(square pos) {
        int x = pos.x-1;
        int y = pos.y-1;
        int final = x + (y * 8);
        if(final>64) return -1;
        return pbb[final];
    }
};


#endif