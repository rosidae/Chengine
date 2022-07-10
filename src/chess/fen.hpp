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
    fen_parts = std::vector<std::string>{fen_parts[0], fen_parts[1], fen_parts[2], fen_parts[3], fen_parts[4], fen_parts[5], fen_parts[6], split(fen_parts[7], " ")[0]};

    board b;
    for(std::string v: fen_parts) {
        
    }
}
#endif