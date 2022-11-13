#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test game over if 9 slots are selected")
{

	TicTacToe game;
	string first_player = "X";

	game.start_game(first_player);

	game.mark_board(2);
    game.game_over();
	game.mark_board(1);
    game.game_over();
	game.mark_board(5);
    game.game_over();
	game.mark_board(3);
    game.game_over();
	game.mark_board(6);
    game.game_over();
	game.mark_board(4);
    game.game_over();
	game.mark_board(7);
    game.game_over();
	game.mark_board(8);
    game.game_over();
	game.mark_board(9);
	game.game_over();

	REQUIRE(game.get_winner() == "C");
}

TEST_CASE("Test first player set to X")
{

	TicTacToe game;

	game.start_game("X");

	REQUIRE(game.get_player() == "X");
}

TEST_CASE("Test first player set to O")
{

	TicTacToe game;

	game.start_game("O");

	REQUIRE(game.get_player() == "O");
}


TEST_CASE("Test win by first column")
{

	TicTacToe game;

	string first_player = "X";

	game.start_game(first_player);

	game.mark_board(1); //X
    game.game_over();
	game.mark_board(2);	//O
    game.game_over();
	game.mark_board(4);	//X
    game.game_over();
	game.mark_board(3);	//O
    game.game_over();
	game.mark_board(7);	//X
    game.game_over();

	REQUIRE(game.game_over() == true);
    REQUIRE(game.get_winner() == "X");
}
/*
Ref to board
0|1|2
3|4|5
6|7|8
*/
TEST_CASE("Test win by second column")
{

    TicTacToe game;

    game.start_game("X");
    
    game.mark_board(2);
    game.game_over();
    game.mark_board(4);
    game.game_over();
    game.mark_board(5);
    game.game_over();
    game.mark_board(3);
    game.game_over();
    game.mark_board(8);
    game.game_over();

    REQUIRE(game.game_over() == true);
    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by third column")
{

    TicTacToe game;

    game.start_game("X");

    game.mark_board(3);
    game.game_over();
    game.mark_board(4);
    game.game_over();
    game.mark_board(6);
    game.game_over();
    game.mark_board(5);
    game.game_over();
    game.mark_board(9);
    game.game_over();
    
    REQUIRE(game.game_over() == true);
    REQUIRE(game.get_winner() == "X");
}

/*
Ref to board
0|1|2
3|4|5
6|7|8
*/

TEST_CASE("Test win by first row")
{

    TicTacToe game;

    game.start_game("X");

    game.mark_board(1);
    game.game_over();
    game.mark_board(4);
    game.game_over();
    game.mark_board(2);
    game.game_over();
    game.mark_board(5);
    game.game_over();
    game.mark_board(3);
    game.game_over();

    REQUIRE(game.game_over() == true);
    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by second row")
{

    TicTacToe game;

    game.start_game("X");

    game.mark_board(4);
    game.game_over();
    game.mark_board(1);
    game.game_over();
    game.mark_board(5);
    game.game_over();
    game.mark_board(2);
    game.game_over();
    game.mark_board(6);
    game.game_over();

    REQUIRE(game.game_over() == true);
    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by third row")
{

    TicTacToe game;

    game.start_game("X");

    game.mark_board(7);
    game.game_over();
    game.mark_board(1);
    game.game_over();
    game.mark_board(8);
    game.game_over();
    game.mark_board(2);
    game.game_over();
    game.mark_board(9);
    game.game_over();

    REQUIRE(game.game_over() == true);
    REQUIRE(game.get_winner() == "X");
}

/*
Ref to board
0|1|2
3|4|5
6|7|8
*/

TEST_CASE("Test win diagonally from top left ")
{

    TicTacToe game;

    game.start_game("X");

    game.mark_board(1);
    game.game_over();
    game.mark_board(4);
    game.game_over();
    game.mark_board(5);
    game.game_over();
    game.mark_board(3);
    game.game_over();
    game.mark_board(9);
    game.game_over();

    REQUIRE(game.game_over() == true);
    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win diagonally from bottom left ")
{

    TicTacToe game;

    game.start_game("X");

    game.mark_board(7);
    game.game_over();
    game.mark_board(8);
    game.game_over();
    game.mark_board(5);
    game.game_over();
    game.mark_board(2);
    game.game_over();
    game.mark_board(3);
    game.game_over();

    REQUIRE(game.game_over() == true);
    REQUIRE(game.get_winner() == "X");
}
/*
Ref to board
0|1|2
3|4|5
6|7|8
*/
TEST_CASE("TicTacToe manager get winner total function")
{

    TicTacToe game;
    TicTacToeManager manager; 
    int x_win = 0;
    int o_win = 0;
    int ties = 0;  


//==================================
// X win
//==================================
    game.start_game("X");
    game.mark_board(1);
    game.game_over();
    game.mark_board(4);
    game.game_over();
    game.mark_board(2);
    game.game_over();   
    game.mark_board(5);
    game.game_over();
    game.mark_board(3);
    game.game_over();
    manager.save_game(game);

//==================================
// O win
//==================================
    game.start_game("O");

    game.mark_board(1);
    game.game_over();
    game.mark_board(4);
    game.game_over();
    game.mark_board(2);  
    game.game_over(); 
    game.mark_board(5);
    game.game_over();
    game.mark_board(3);
    game.game_over();
    manager.save_game(game);

//==================================
// Tie
//==================================
    game.start_game("X");

	game.mark_board(2);
    game.game_over();
	game.mark_board(1);
    game.game_over();
	game.mark_board(5);
    game.game_over();
	game.mark_board(3);
    game.game_over();
	game.mark_board(6);
    game.game_over();
	game.mark_board(4);
    game.game_over();
	game.mark_board(7);
    game.game_over();
	game.mark_board(8);
    game.game_over();
	game.mark_board(9);
	game.game_over();
    manager.save_game(game);

    manager.get_winner_total(x_win, o_win, ties);

    REQUIRE(x_win == 1);
    REQUIRE(o_win == 1);
    REQUIRE(ties == 1);

}