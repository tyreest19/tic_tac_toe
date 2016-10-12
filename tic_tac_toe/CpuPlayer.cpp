//
//  CpuPlayer.cpp
//  tic_tac_toe
//
//  Created by Tyree Stevenson on 10/10/16.
//  Copyright © 2016 Tyree Stevenson. All rights reserved.
//
#include <stdlib.h>
#include <time.h>
#include "Player.hpp"
#include "CpuPlayer.hpp"
#include <string>
#include <iostream>
using namespace std;
void CpuPlayer:: set_symbol(string player_symbol) {
    if (player_symbol == "x") {
        symbol = "o";
    }
    if (player_symbol == "o") {
        symbol = "x";
    }
}

string CpuPlayer:: place_symbol(string board[3][3]) {
    srand(time(0));
    while (true) {
        int random_column = rand() % 3;
        int random_row = rand() % 3;
        if (board[random_column][random_row] != "o" && board[random_column][random_row] != "x") {
            return board[random_column][random_row];
        }
    }
}

string convert_int_spot_on_board(int number) {
    return "may need";
    
    
    
    
}










