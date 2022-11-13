#include <iostream>
#include "tic_tac_toe.h"

using std::cout;
using std::cin;

bool TicTacToe::game_over()
{
    bool win;

    if(check_row_win()|| check_column_win()|| check_diagonal_win())
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
        if (first_player == "x" || first_player == "X")
        {

            player = "X";
            xo_loop = 1;
        }
        else if(first_player == "O" || first_player == "o")
        {
            player = "O";
            xo_loop = 1;
        }
        else {cout << "Please enter X or O\n";}
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

    if(pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X"){win = true;}

    else if(pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X"){win = true;}

    else if(pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X"){win = true;}

    else if(pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O"){win = true;}

    else if(pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O"){win = true;}

    else if(pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O"){win = true;}

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

    if(pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X"){win = true;}

    else if(pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X"){win = true;}

    else if(pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X"){win = true;}

    else if(pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O"){win = true;}

    else if(pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O"){win = true;}

    else if(pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O"){win = true;}

    else{ win = false;}

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

    if(pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[0] != " "){win = true;}

    else if(pegs[2] == pegs[4] && pegs[4] == pegs[6] && pegs[2] != " "){win = true;}

    else {win = false;}
    

    return win;
}

void TicTacToe::set_winner()
{

    if(player == "X"){winner = "O";}

    else{winner = "X";}

}

ostream& operator<<(ostream& out, const TicTacToe& game)
{
    for(int i = 0; i < game.pegs.size(); i++)
    {
        out << game.pegs[i];
        if (i == 2 || i == 5 || i == 8)
        {
            out << '\n';
        }
        else{out << '|';}
    }

    return out;
}

istream &operator>>(istream &in, TicTacToe &game)
{
    int position;

    cout << "Player " << game.get_player() << ", Select your position\n";
	cin >> position;
	game.mark_board(position);

    return in;
}

