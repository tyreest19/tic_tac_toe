//
//  make_board.cpp
//  tic_tac_toe
//
//  Created by Tyree Stevenson on 10/8/16.
//  Copyright © 2016 Tyree Stevenson. All rights reserved.
//
#include <iostream>
#include "make_board.hpp"
#include <string>
using namespace std;
string board[3][3];
void make_board:: generate_board() {
    board[0][0] = "A1";
    board[0][1] = "A2";
    board[0][2] = "A3";
    board[1][0] = "B1";
    board[1][1] = "B2";
    board[1][2] = "B3";
    board[2][0] = "C1";
    board[2][1] = "C2";
    board[2][2] = "C3";
};
void make_board:: edit_board(string user_input,string player_symbol) {
    if (user_input == "A1" || user_input == "A2" || user_input == "A3") {
        if (user_input == "A1" && board[0][0] != "A1") {
            string correct_field = get_correct_input();
            edit_board(correct_field,player_symbol);
        }
        if (user_input == "A2" && board[0][1] != "A2") {
            string correct_field = get_correct_input();
            edit_board(correct_field,player_symbol);
        }
        if (user_input == "A3" && board[0][2] != "A3") {
            string correct_field = get_correct_input();
            edit_board(correct_field,player_symbol);
        }
        if (user_input == "A1" && board[0][0] != "x" && board[0][0] != "o") {
            board[0][0] = player_symbol;
        }
        if (user_input == "A2" && board[0][1] != "x" && board[0][1] != "o") {
            board[0][1] = player_symbol;
        }
        if (user_input == "A3" && board[0][2] != "x" && board[0][2] != "o") {
            board[0][2] = player_symbol;
            }

        }
        if (user_input == "B1" || user_input == "B2" || user_input == "B3") {
            if (user_input == "B1" && board[1][0] != "B1") {
                string correct_field = get_correct_input();
                edit_board(correct_field,player_symbol);
            }
            if (user_input == "B2" && board[1][1] != "B2") {
                string correct_field = get_correct_input();
                edit_board(correct_field,player_symbol);
            }
            if (user_input == "B3" && board[1][2] != "B3") {
                string correct_field = get_correct_input();
                edit_board(correct_field,player_symbol);
            }
            if (user_input == "B1" && board[1][0] != "x" && board[1][0] != "o") {
                board[1][0] = player_symbol;
            }
            if (user_input == "B2" && board[1][1] != "x" && board[1][1] != "o") {
                board[1][1] = player_symbol;
            }
            if (user_input == "B3" && (board[1][2] != "x" && board[1][2] != "o")) {
                board[1][2] = player_symbol;
            }
        }
        if (user_input == "C1" || user_input == "C2" || user_input == "C3") {
            if (user_input == "C1" && board[2][0] != "C1") {
                string correct_field = get_correct_input();
                edit_board(correct_field,player_symbol);
            }
            if (user_input == "C2" && board[2][1] != "C2") {
                string correct_field = get_correct_input();
                edit_board(correct_field,player_symbol);
            }
            if (user_input == "C3" && board[2][2] != "C3") {
                string correct_field = get_correct_input();
                edit_board(correct_field,player_symbol);
            }
            if (user_input == "C1" && board[2][0] != "x" && board[2][0] != "o"){
                board[2][0] = player_symbol;
            }
            if (user_input == "C2" && board[2][1] != "x" && board[2][1] != "o") {
                board[2][1] = player_symbol;
            }
            if (user_input == "C3" && board[2][2] != "x" && board[2][2] != "o"){
                board[2][2] = player_symbol;
            }
        }
        if (user_input != "A1" && user_input != "A2" && user_input != "A3"  &&
                 user_input != "B1" && user_input != "B2" && user_input != "B3" &&
                 user_input != "C1" && user_input != "C2" && user_input != "C3") {
            string correct_field = get_correct_input();
            edit_board(correct_field,player_symbol);
        }
};
string make_board:: get_correct_input(){
    string user_input;
    cout << "please choose a field that is empty OR a field that exist. type the fields as displayed: ";
    getline(cin,user_input);
    return user_input;
};
void make_board:: display_board() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
            cout << "|";
        }
        cout << endl;
    }
};
make_board:: make_board(){
    generate_board();
};


