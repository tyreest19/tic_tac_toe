//
//  make_board.hpp
//  tic_tac_toe
//
//  Created by Tyree Stevenson on 10/8/16.
//  Copyright © 2016 Tyree Stevenson. All rights reserved.
//

#ifndef make_board_hpp
#define make_board_hpp

#include <stdio.h>
#include <string>
using namespace std;
#endif /* make_board_hpp */
class make_board {
public:
    void generate_board();
    make_board();
    void edit_board(string user_input,string player_symbol);
    void display_board();
    string board[3][3];
private:
    string get_correct_input();
};
