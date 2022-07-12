#ifndef INC_PIECE
  #define INC_PIECE
#define WP 0x11
#define WN 0x12
#define WB 0x13
#define WR 0x14
#define WQ 0x15
#define WK 0x16
#define BP 0x21
#define BN 0x22
#define BB 0x23
#define BR 0x24
#define BQ 0x25
#define BK 0x26
#define EMPTY 0x00
#include "board.hpp"

int piecefromchar(char in) {
  switch(in) {
    case 'P': return WP;
    case 'N': return WN;
    case 'B': return WB;
    case 'R': return WR;
    case 'Q': return WQ;
    case 'K': return WK;
    case 'p': return BP;
    case 'n': return BN;
    case 'b': return BB;
    case 'r': return BR;
    case 'q': return BQ;
    case 'k': return BK;
    default: return EMPTY;
  }
}
char charfrompiece(int in) {
  switch(in) {
    case WP: return 'P';
    case WN: return 'N';
    case WB: return 'B';
    case WR: return 'R';
    case WQ: return 'Q';
    case WK: return 'K';
    case BP: return 'p';
    case BN: return 'n';
    case BB: return 'b';
    case BR: return 'r';
    case BQ: return 'q';
    case BK: return 'k';
    default: return ' ';
  }
}

bool validatemove(board b, square from, square to, int piece) {
  if(piece == EMPTY) {
    return false;
  }
  if(piece == WP || piece == BP) {
    if(from.x == to.x && from.y+1 == to.y) {
      if(b.getpiecefromsquare(to) == EMPTY) {
        return true;
      }
      return false;
    }
    if(from.x == to.x && from.y+2 == to.y) {
      if(from.y == 2 || from.y == 6) {
        if(b.getpiecefromsquare(to) == EMPTY) {
          return true;
        }
        return false;
      }
      return false;
    }
    if(from.x+1 == to.x && from.y+1 == to.y) {
      if(b.getpiecefromsquare(to) != EMPTY) return true;
      return false;
    }
    if(from.x+1 == to.x && from.y-1 == to.y) {
      if(b.getpiecefromsquare(to) != EMPTY) return true;
      return false;
    }
  }
  return false;
}
#endif