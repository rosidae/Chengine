#ifndef INC_BOARD
  #define INC_BOARD
#include <vector>
class board {
public:
    board() {}
    std::vector<int> pbb;
    bool WshortCastle = true;
    bool WlongCastle = true;
    bool BshortCastle = true;
    bool BlongCastle = true;
    bool halfmoveClock = 0;
    int fullmoveNumber = 1;
};
#endif