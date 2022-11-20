#include "tic_tac_toe_manager.h"

void TicTacToeManager::save_game(unique_ptr<TicTacToe>& b)
{
    string winner = b->get_winner();
    update_winner_count(winner);
    games.push_back(std::move(b));
    
}

ostream& operator<<(ostream & out, const TicTacToeManager & manager)
{

    for (int i = 0; i < manager.games.size(); i++)
    {
        auto& game = manager.games[i];

        out << "Game " << i+1 <<  *game << "\n";
    }

return out;
}

void TicTacToeManager::get_winner_total(int& o, int& x, int& t)
{

    o = o_win;
    x = x_win;
    t = ties;

}

void TicTacToeManager::update_winner_count(string winner)
{

    if(winner == "X")
    {
        x_win++;
    }
    else if(winner == "O")
    {
        o_win++;
    }
    else ties++;

}