//
//  Player.cpp
//  tic_tac_toe
//
//  Created by Tyree Stevenson on 10/9/16.
//  Copyright © 2016 Tyree Stevenson. All rights reserved.
//
#include "Player.hpp"
#include <iostream>
#include <string>
using namespace std;
void Player:: set_symbol() {
    string user_symbol;
    do {
        cout << "please choose a x or o: ";
        getline(cin,user_symbol);
        if (user_symbol == "x") {
            break;
        }
        if (user_symbol == "o") {
            break;
        }
    } while (true);
    symbol = user_symbol;
}
string Player:: get_symbol() {
    return symbol;
}
bool Player:: did_i_win(string board[3][3]) {
    bool diagonal_win = Player:: diagonal_win(board);
    bool horizontal_win = Player:: horizontal_win(board);
    bool vertical_win = Player:: vertical_win(board);
    if (diagonal_win == true || horizontal_win == true || vertical_win == true) {
        return true;
    }
    return false;
}
bool Player:: diagonal_win(string board[3][3]) {
    if (board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol) {
        return true;
    }
    if (board[0][2] == symbol && board[1][1] == symbol && board[2][0] == symbol) {
        return true;
    }
    return false;
}
bool Player:: horizontal_win(string board[3][3]) {
    int score = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if(board[i][j] == symbol) {
                score += 1;
            }
        }
        if (score == 3) {
            return true;
        }
        score = 0;
    }
    return false;
}
bool Player:: vertical_win(string board[3][3]) {
    if (board[0][0] == symbol && board[1][0] == symbol && board[2][0] == symbol) {
        return true;
    }
    if (board[0][1] == symbol && board[1][1] == symbol && board[2][1] == symbol) {
        return true;
    }
    if (board[0][2] == symbol && board[1][2] == symbol && board[2][2] == symbol) {
        return true;
    }
    return false;
}
string Player:: place_symbol() {
    string user_input;
    do {
        cout << "choose a location on the board in the format displayed: ";
        getline(cin, user_input);
        if (user_input == "A1" || user_input == "A2" || user_input == "A3") {
            break;
        }
        if (user_input == "B1" || user_input == "B2" || user_input == "B3") {
            break;
        }
        if (user_input == "C1" || user_input == "C2" || user_input == "C3") {
            break;
        }
    } while (true);
    return user_input;
}



