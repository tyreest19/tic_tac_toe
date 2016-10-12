//
//  main.cpp
//  tic_tac_toe
//
//  Created by Tyree Stevenson on 10/8/16.
//  Copyright © 2016 Tyree Stevenson. All rights reserved.
//

#include <iostream>
#include <string>
#include "CpuPlayer.cpp"
#include "make_board.cpp"
#include "Player.cpp"
using namespace std;
void game(char user_turn);
int main(int argc, const char * argv[]) {
    string user_turn;
    while (user_turn != "yes" && user_turn != "no") {
        cout << "do you want to go first yes or no(enter as displayed): ";
        getline(cin,user_turn);
    }
    game(user_turn[0]);
    return 0;
}
void game(char user_turn) {
    make_board board;
    Player player;
    player.set_symbol();
    CpuPlayer cpu;
    cpu.set_symbol(player.get_symbol());
    board.display_board();
    switch (user_turn) {
        case 'y': {
            while (true) {
                board.edit_board(player.place_symbol(), player.get_symbol());
                board.display_board();
                if (player.did_i_win(board.board) == true) {
                    cout << "congrats you won" << endl;
                    break;
                }
                cout << endl;
                board.edit_board(cpu.place_symbol(board.board), cpu.get_symbol());
                cout << "oppent has made their move" << endl;
                board.display_board();
                if (cpu.did_i_win(board.board)) {
                    cout << "you lost" << endl;
                    break;
                }
                cout << endl;
            }
            break;
        }
            
        case 'n': {
            while (true) {
                cout << "your oppent has made a move" << endl;
                board.edit_board(cpu.place_symbol(board.board), cpu.get_symbol());
                board.display_board();
                if (cpu.did_i_win(board.board)) {
                    cout << "you lost" << endl;
                    break;
                }
                board.edit_board(player.place_symbol(), player.get_symbol());
                board.display_board();
                if (player.did_i_win(board.board) == true) {
                    cout << "congrats you won" << endl;
                    break;
                }
                cout << endl;
            }
        }
    }
}







