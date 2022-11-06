#include <iostream>
#include "tic_tac_toe.h"

using std::cout;

bool TicTacToe::game_over()
{
    bool win;

    if(check_row_win() == true|| check_column_win() == true|| check_diagonal_win() == true)
    {

        set_winner();
        win = true;

    }
    else if(check_board_full())
    {

        winner = "C";
        win = true;

    }
    else
    {
        win = false;
    }

    return win;
}

void TicTacToe::start_game(string first_player)
{   
    // local loop var
    int xo_loop = 0;

    do
    {
        if (first_player == "x" || first_player == "X" || first_player == "O" || first_player == "o")
        {

            player = first_player;
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

string TicTacToe::get_winner()
{
    return winner;
}

/*
Ref to board
0|1|2
3|4|5
6|7|9
*/

bool TicTacToe::check_column_win()
{

    bool win;

    if(pegs[0] != " " && pegs[0] == pegs[3] && pegs[3] == pegs[6])
    {
        win = true;
    }
    else if(pegs[1] != " " && pegs[1] == pegs[4] && pegs[4] == pegs[7])
    {
        win = true;
    }
    else if(pegs[2] != " " && pegs[2] == pegs[5] && pegs[5] == pegs[9])
    {
        win = true;
    }
    else{win = false;}

    return win;
}

/*
Ref to board
0|1|2
3|4|5
6|7|9
*/

bool TicTacToe::check_row_win()
{

    bool win;

    if(pegs[0] != " " && pegs[0] == pegs[1] && pegs[1] == pegs[2])
    {
        win = true;
    }
    else if(pegs[3] != " " && pegs[3] == pegs[4] && pegs[4] == pegs[5])
    {
        win = true;
    }
    else if(pegs[6] != " " && pegs[6] == pegs[7] && pegs[7] == pegs[8])
    {
        win = true;
    }
    else{win = false;}
    
    return win;
}

/*
Ref to board
0|1|2
3|4|5
6|7|9
*/

bool TicTacToe::check_diagonal_win()
{

    bool win;

    if(pegs[0] != " " && pegs[0] == pegs[4] && pegs[4] == pegs[9])
    {
        win = true;
    }
    else if(pegs[2] != " " && pegs[2] == pegs[4] && pegs[4] == pegs[6])
    {
        win = true;
    }
    else{win = false;}

    return win;
}

void TicTacToe::set_winner()
{

    if(player == "X")
    {
        winner = "O";
    }
    else{winner = "X";}

}