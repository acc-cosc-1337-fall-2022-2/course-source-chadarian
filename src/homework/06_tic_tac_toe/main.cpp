#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using std::cout;
using std::cin; 
using std::make_unique;

int main() 
{
	//Var dec

	unique_ptr<TicTacToe> game;
	TicTacToeManager manager;
	string first_player;
	int gameloop = 0;
	int reply = {0};
	string game_type;

	do
	{
		

        do
        {
            cout << "\n\nWelcome to a game of Tic Tac Toe!\n\n";
			cout << "Press 3 for 3x3 or 4 for 4x4\n";
			cin >> game_type;
        }
        while(game_type != "3" && game_type != "4");

		if(game_type == "3")
		{
			game = make_unique<TicTacToe3>();
		}
		else
		{
			game = make_unique<TicTacToe4>();
		}
		
		cout << "Player One type X or O\n";
        cin >> first_player;

			if (first_player == "X" || first_player == "O")
			{
				game->start_game(first_player);

				do
				{
					cout << *game;
					cin >> *game;
				}
				while (!game->game_over());

				manager.save_game(game);
				
				int o, x, t;
				manager.get_winner_total(o, x, t);
				cout << "\nO Wins: " << o << '\n';
				cout << "X Wins: " << x << '\n';
				cout << "Ties: " << t << '\n';
			}
			else

		if( game->get_winner() == "X")
		{
			cout << "Player X wins!";
		}
		else if(game->get_winner() == "O")
		{
			cout << "Player O wins!";
		}
		else{cout << "Its a TIE!";}

		cout << "\n==============================\n";
		cout << "Press 1 to Continue or 0 to End game\n";
		cout << "==============================\n";
		cin >> reply;

		if(reply == 0)
		{
			cout << "Ending game\n";
			gameloop = 1;
		}
		else
		{
			cout << "Starting another game\n";
			game->start_game(first_player);
			gameloop = 0;
		}
	}
	while(gameloop == 0);
	
	cout << manager;

	return 0;
}