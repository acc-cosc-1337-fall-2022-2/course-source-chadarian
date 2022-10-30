#include "tic_tac_toe.h"
#include <iostream>

using std::cout;
using std::cin;

int main() 
{
	//Var dec

	TicTacToe game;
	string first_player;
	int position;
	int gameloop = 0;
	int reply = {0};
	
	cout << "\n\nWelcome to a game of Tic Tac Toe!\n\n";

	cout << "Here is the board\n";
	cout << "1|2|3\n"
			"4|5|6\n"
			"7|8|9\n";

	do
	{
		cout << "For player 1, Pick X or O\n";
		cin >> first_player;

		game.start_game(first_player);

		while(!game.game_over())
		{

			game.display_board();
			cout << "Player " << game.get_player() << ", Select your position\n";
			cin >> position;
			game.mark_board(position);

		}

		game.display_board();

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
			gameloop = 0;
		}
	}
	while(gameloop == 0);

	return 0;
}