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