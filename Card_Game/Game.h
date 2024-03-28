#pragma once

#ifndef GAME_H
#define GAME_H

#include <vector>
#include <string>

#include "Rules.h"
#include "player.h"
#include "GameDesk.h"


class Game {
public:

	std::vector<std::string> PlayerType();
	std::vector<std::string> GameType();

	int Init();
	// метод не позволяет добавлять игроков с одинаковыми именами
	void Add(std::string playerType);
	void Set(std::string gameType);

	//тут подробнее опишем состав возврата
	std::vector<std::pair<std::string, std::string>> CurrentPlayers();

	void ChangeName(std::string newName, int position);

	void Play();

	const GameDesk& CurrentEnvirement()const;

private:
	GameDesk desk_;
	Rules* rules_;
};


#endif // !GAME_H
