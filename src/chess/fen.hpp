#ifndef INC_FEN
  #define INC_FEN
#include "board.hpp"
#include "../uci/ucii.hpp"
#include "piece.hpp"
#include <string>

board parse_fen(std::string fen) {
    std::vector<std::string> fen_parts = split(fen, "/");
    std::vector<std::string> control = split(fen_parts[7], " ");
    control.erase(control.begin());
    fen_parts = std::vector<std::string>{
        fen_parts[0], 
        fen_parts[1], 
        fen_parts[2], 
        fen_parts[3], 
        fen_parts[4], 
        fen_parts[5], 
        fen_parts[6], 
        split(fen_parts[7], " ")[0]
    };

    int tomove = control[0] == "w" ? 0x0000 : 0x1111;

    bool _wsc = control[1].find("K") ? true : false;
    bool _wlc = control[1].find("Q") ? true : false;
    bool _bsc = control[1].find("k") ? true : false;
    bool _blc = control[1].find("q") ? true : false;

    int _hmclock = std::stoi(control[3]);
    int _fmclock = std::stoi(control[4]);

    board b = board();
    b.wsc = _wsc;
    b.wlc = _wlc;
    b.bsc = _bsc;
    b.blc = _blc;
    b.hmclock = _hmclock;
    b.fmclock = _fmclock;
    int total = 0;
    for(std::string part: fen_parts) {
        for(char c: part) {
            if(std::isdigit(c)) {
                int num = std::stoi(std::string(1, c));
                for(int i = 0; i < num; i++) {
                    b.pbb.push_back(0);
                }
                total+=num;
            } else {
                b.pbb.push_back(piecefromchar(c));
            }
        }
    }
    if(total > 64) {
        uprint("info string too many pieces on board (FEN PARSER)");
        return board();
    }
    return b;    
}

board defaultboard = parse_fen("rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq - 0 1");
#endif