#include <iostream>
#include "tic_tac_toe.h"

using std::cout;

bool TicTacToe::game_over()
{

    return check_board_full();

}

void TicTacToe::start_game(string first_player)
{   
    // local loop var
    int xo_loop = 0;

    do
    {
        if (first_player == "x" || first_player == "X" || first_player == "O" || first_player == "o")
        {

            first_player = player;
            xo_loop = 1;
        }
        else
        {

            cout << "Please enter X or O\n";

        }
    }
    while(xo_loop = 0);

    clear_board();

}

void TicTacToe::mark_board(int position)
{

    pegs[position - 1] = player;
    set_next_player();

}


string TicTacToe::get_player() const
{

    return player;

}

void TicTacToe::display_board() const
{

    vector<string> board;

    for(int i = 0; i < 3; ++i)
    {

        board.emplace_back(" ");
        board.emplace_back("|");
        board.emplace_back(" ");
        board.emplace_back("|");
        board.emplace_back(" \n");

    }
}

void TicTacToe::set_next_player()
{

    if(player == "x" || player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}

bool TicTacToe::check_board_full()
{
    bool full;

    for(auto& peg : pegs)
    {
        if (peg == " ")
        {
            full = false;
        }
        else
        {
            full = true;
        }
    };
    return full;
}

void TicTacToe::clear_board()
{

    for (auto& peg :  pegs)
    {
        peg = " ";
    }

}