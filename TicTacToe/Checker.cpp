#include "Checker.hpp"
#include <string>

Checker::Checker() {
	for (int i = 0; i < 9; i++) {
		board_.push_back(" ");
	}
	isFirstPlayerTurn_ = true;
}

Checker::~Checker() {
	board_.clear();
	isFirstPlayerTurn_ = false;
}

Checker::Checker(Player& player1, Player& player2) {
	player1_ = player1;
	player2_ = player2;
	for (int i = 0; i < 9; i++) {
		board_.push_back(" ");
	}
	isFirstPlayerTurn_ = true;
}

void Checker::placeMark(int spot) {
	std::string mark = "";
	std::cout << "'s turn" << std::endl;
	if (isFirstPlayerTurn_) {
		std::cout << player1_.getName();
		mark = "O";
	}
	else {
		mark = "X";
		std::cout << player2_.getName();
	}

	if (board_[spot - 1] == " ") {
		board_[spot - 1] = mark;
		isFirstPlayerTurn_ = !isFirstPlayerTurn_;
		displayBoard();
	}
	else {
		std::cout << "This space is occupied." << std::endl;
	}
}

bool Checker::winner() {
	if (sameThree(0, 1, 2)) 
		return true;
	else if (sameThree(0, 3, 6)) 
		return true;
	else if (sameThree(0, 4, 8)) 
		return true;
	else if (sameThree(1, 4, 7)) 
		return true;
	else if (sameThree(2, 5, 8)) 
		return true;
	else if (sameThree(2, 4, 6)) 
		return true;
	else if (sameThree(3, 4, 5)) 
		return true;
	else if (sameThree(6, 7, 8)) 
		return true;
	else 
		return false;
}

void Checker::displayBoard() {
	for (int row = 0; row < 9; row += 3) {
		for (int col = row; col < row + 3; col++) {
			std::cout << "[" << board_[col] << "]";
		}
		std::cout << std::endl;
	}
}

bool Checker::sameThree(int one, int two, int three) {
	if (one == two == three) {
		return true;
	}
	return false;
}