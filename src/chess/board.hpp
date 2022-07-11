#ifndef INC_BOARD
  #define INC_BOARD
#include <vector>
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
#endif