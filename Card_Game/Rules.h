#pragma once

#ifndef RULES_H
#define RULES_H


#include <string>

#include "Card.h"
#include "Player.h"
#include "Deck.h"
#include "GameDesk.h"
#include "Action.h"



class Rules {
public:

	Rules(std::string name, int minPlayers, int maxPlayers)
		:minPlayers_(minPlayers),
		maxPlayers_(maxPlayers),
		name_(name),
		activePlayer(0) {}

	virtual Deck StatrDeck() = 0;
	virtual void InitialDesk(GameDesk& obj) = 0;
	virtual std::vector<std::string> Actions() = 0;

	int MinPlayers()const;
	int MaxPlayers()const;
	std::string Name()const;

	bool CanStart(const GameDesk& obj);
	bool CanAddPlayer(const GameDesk& obj);

	virtual void PlayMove(const GameDesk& obj) = 0;

private:
	int minPlayers_;
	int maxPlayers_;
	std::string name_;
	int activePlayer;
};



#endif // !RULES_H
