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
void game();
int main(int argc, const char * argv[]) {
    string replay;
    do {
        game();
        cout << "do you want to play again enter yes or no(enter as displayed): ";
        getline(cin,replay);
        while (replay != "yes" and replay != "no") {
            cout << "do you want to play again enter yes or no(enter as displayed): ";
            getline(cin,replay);
        }
    } while (replay == "yes");
    return 0;
}
void game() {
    string user_turn;
    while (user_turn != "yes" && user_turn != "no") {
        cout << "do you want to go first yes or no(enter as displayed): ";
        getline(cin,user_turn);
    }
    make_board board;
    Player player;
    player.set_symbol();
    CpuPlayer cpu;
    cpu.set_symbol(player.get_symbol());
    board.display_board();
    switch (user_turn[0]) {
        case 'y': {
            board.edit_board(player.place_symbol(), player.get_symbol());
            board.display_board();
            cout << "your oppent has moved" << endl;
            board.edit_board(cpu.first_move(board.board), cpu.get_symbol());
            board.display_board();
            while (true) {
                board.edit_board(player.place_symbol(), player.get_symbol());
                board.display_board();
                if (player.did_i_win(board.board) == true) {
                    cout << "congrats you won" << endl;
                    break;
                }
                if (player.tie_game(board.board) == true) {
                    cout << "its was a tie game" << endl;
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
                if (cpu.tie_game(board.board) == true) {
                    cout << "it was a tie game" << endl;
                    break;
                }
                cout << endl;
            }
            break;
        }
            
        case 'n': {
            board.edit_board(cpu.first_move(board.board), cpu.symbol);
            while (true) {
                cout << "your oppent has made a move" << endl;
                board.display_board();
                if (cpu.did_i_win(board.board)) {
                    cout << "you lost" << endl;
                    break;
                }
                if (cpu.tie_game(board.board) == true) {
                    cout << "it was a tie" << endl;
                    break;
                }
                board.edit_board(player.place_symbol(), player.get_symbol());
                board.display_board();
                if (player.did_i_win(board.board) == true) {
                    cout << "congrats you won" << endl;
                    break;
                }
                if (player.tie_game(board.board) == true) {
                    cout << "it was a tie" << endl;
                    break;
                }
                cout << endl;
                board.edit_board(cpu.place_symbol(board.board), cpu.symbol);
            }
        }
    }
}







