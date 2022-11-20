#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;
using std::ostream;
using std::istream;

#ifndef TicTacToe_H
#define TicTacToe_H

class TicTacToe
{
    string player;
    string winner;

public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player() const;
    string get_winner();
    friend ostream& operator<<(ostream& out, const TicTacToe& game);
    friend istream& operator>>(istream& in, TicTacToe& game);
    explicit TicTacToe(int size);


private:
    void set_next_player();
    bool check_board_full();
    void clear_board();  
    void set_winner();

protected:
    vector<string> pegs;
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();  

};
#endif