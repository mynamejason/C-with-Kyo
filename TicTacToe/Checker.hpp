#ifndef Checker_hpp

#define Checker_hpp

#include "Player.hpp";
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
	
};
#endif