//
//  main.cpp
//  tic_tac_toe
//
//  Created by Tyree Stevenson on 10/8/16.
//  Copyright © 2016 Tyree Stevenson. All rights reserved.
//

#include <iostream>
#include <string>
#include "make_board.cpp"
#include "Player.cpp"
using namespace std;
int main(int argc, const char * argv[]) {
    Player player;
    player.set_symbol();
    make_board board;
    board.display_board();
    board.edit_board(player.place_symbol(), player.get_symbol());
    board.display_board();
    board.edit_board(player.place_symbol(), player.get_symbol());
    board.display_board();
    board.edit_board(player.place_symbol(), player.get_symbol());
    board.display_board();
    cout << "did you win: " << player.did_i_win(board.board) << endl;    
//    board.edit_board("B1", "x");
//    board.edit_board("B2", "x");
//    board.edit_board("B3", "x");
//    board.edit_board("C1", "x");
//    board.edit_board("C2", "x");
//    board.edit_board("C3", "x");
//    cout << endl;
//    board.display_board();
//    cout << endl;
//    board.generate_board();
//    board.display_board();
    
    return 0;
}
