#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test game over if 9 slots are selected")
{

	TicTacToe game;
	string first_player = "X";

	game.start_game(first_player);

	game.mark_board(2);
	game.mark_board(1);
	game.mark_board(5);
	game.mark_board(3);
	game.mark_board(6);
	game.mark_board(4);
	game.mark_board(7);
	game.mark_board(8);
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
	game.mark_board(2);	//O
	game.mark_board(4);	//X
	game.mark_board(3);	//O
	game.mark_board(7);	//X

	REQUIRE(game.game_over() == true);
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
    game.mark_board(4);
    game.mark_board(5);
    game.mark_board(3);
    game.mark_board(8);

    REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by third column")
{

    TicTacToe game;

    game.start_game("X");

    game.mark_board(3);
    game.mark_board(4);
    game.mark_board(6);
    game.mark_board(5);
    game.mark_board(9);

    REQUIRE(game.game_over() == true);
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
    game.mark_board(4);
    game.mark_board(2);
    game.mark_board(5);
    game.mark_board(3);

    REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by second row")
{

    TicTacToe game;

    game.start_game("X");

    game.mark_board(4);
    game.mark_board(1);
    game.mark_board(5);
    game.mark_board(2);
    game.mark_board(6);

    REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win by third row")
{

    TicTacToe game;

    game.start_game("X");

    game.mark_board(7);
    game.mark_board(1);
    game.mark_board(8);
    game.mark_board(2);
    game.mark_board(9);

    REQUIRE(game.game_over() == true);
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
    game.mark_board(4);
    game.mark_board(5);
    game.mark_board(3);
    game.mark_board(9);

    REQUIRE(game.game_over() == true);
}

TEST_CASE("Test win diagonally from bottom left ")
{

    TicTacToe game;

    game.start_game("X");

    game.mark_board(7);
    game.mark_board(8);
    game.mark_board(5);
    game.mark_board(2);
    game.mark_board(3);

    REQUIRE(game.game_over() == true);
}