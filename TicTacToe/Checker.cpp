#include "Checker.hpp"
#include <string>

Checker::Checker() {
	if (sameThree(0, 1, 2)) {
		
	}
}

Checker::~Checker() {

}

Checker::Checker(Player& player1, Player& player2) {
	
}

void Checker::placeMark(int spot) {

}

bool Checker::winner() {
	if (sameThree(0, 1, 2)) {
		return true;
	}
	else if (sameThree(0, 3, 6)) {
		return true;
	}
	else if (sameThree(0, 4, 8)) {
		return true;
	}
	else if (sameThree(1, 4, 7)) {
		return true;
	}
	else if (sameThree(2, 5, 8)) {
		return true;
	}
	else if (sameThree(2, 4, 6)) {
		return true;
	}
	else if (sameThree(3, 4, 5)) {
		return true;
	}
	else if (sameThree(6, 7, 8)) {
		return true;
	}
	else {
		return false;
	}
}