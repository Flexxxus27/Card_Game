#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#include <string>

#include "Deck.h"
#include "Controller.h"


class Player {
public:

	Player();

private:
	std::string name_;
	Deck hand_;
	Controller controller_;
};




#endif