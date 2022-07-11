#ifndef INC_PIECE
  #define INC_PIECE
#define WP 0x01
#define WN 0x02
#define WB 0x03
#define WR 0x04
#define WQ 0x05
#define WK 0x06
#define BP 0x11
#define BN 0x12
#define BB 0x13
#define BR 0x14
#define BQ 0x15
#define BK 0x16
#define EMPTY 0x00

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

bool validpawnmove(board b, int from, int to, int color) {
  return false;
}
#endif