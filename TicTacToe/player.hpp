#ifndef player_hpp
#define player_hpp

#include "player.hpp"
#include <vector>
#include <string>
#include <iostream>

class Player {
public:
	Player();
	~Player();
	Player(std::string& name, std::string& mark);

	std::string getMark() const;
	std::string getName() const;

private:
	std::string name_;
	std::string mark_;
	int age_;
};

#endif