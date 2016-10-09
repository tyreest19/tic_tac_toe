//
//  Player.hpp
//  tic_tac_toe
//
//  Created by Tyree Stevenson on 10/9/16.
//  Copyright © 2016 Tyree Stevenson. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>

#include <stdio.h>
#include <string>
using namespace std;
class Player {
public:
    void set_symbol();
    string get_symbol();
    bool did_i_win(string board[3][3]);
    string place_symbol();
private:
    bool diagonal_win(string board[3][3]);
    bool horizontal_win(string board[3][3]);
    bool vertical_win(string board[3][3]);
    string symbol;
};

#endif /* Player_hpp */
