#include <string>
#include "player.hpp"

Player::Player() {
	name_ = "";
	mark_ = "";
}

Player::~Player() {
	name_ = "";
	mark_ = "";
}

Player::Player(std::string& name, std::string& mark) {
	name_ = name;
	mark_ = mark;
}

std::string Player::getName() const {
	return name_;
}

std::string Player::getMark() const {
	return mark_;
}