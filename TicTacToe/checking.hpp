#ifndef checking_hpp

#define checking_hpp

#include "player.hpp";
#include <vector>
#include <string>
#include <iostream>

class Checker {
public:
	Checker();
	~Checker();
	Checker(Player& player1, Player& player2);
	void placeMark(int spot);
	bool winner();

private:
	void displayBoard();
	void generateBoard();
	bool sameThree(int one, int two, int three);
	Player player1_;
	Player player2_;
};
#endif