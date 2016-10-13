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
    cout << "enter a empty location on the board as displayed: ";
    getline(cin,user_input);
    return user_input;
}
bool Player:: tie_game(string board[3][3]) {
    int filled_spaces = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == "x" || board[i][j] == "o") {
                filled_spaces += 1;
            }
        }
    }
    return filled_spaces == 9;
}


