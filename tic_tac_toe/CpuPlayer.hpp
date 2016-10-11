//
//  CpuPlayer.hpp
//  tic_tac_toe
//
//  Created by Tyree Stevenson on 10/10/16.
//  Copyright © 2016 Tyree Stevenson. All rights reserved.
//

#ifndef CpuPlayer_hpp
#define CpuPlayer_hpp
#include <iostream>
#include <stdio.h>
#include "Player.hpp"
#include <string>
using namespace std;
class CpuPlayer: public Player  {
public:
    void set_symbol(string player_symbol);
    string place_symbol(string board[3][3]);
protected:
    string convert_int_spot_on_board(int number);
};
#endif /* CpuPlayer_hpp */
