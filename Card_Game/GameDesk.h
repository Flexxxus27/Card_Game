﻿#pragma once

#ifndef GAME_DESK_H
#define GAME_DESK_H

#include <vector>

#include "Card.h"
#include "Deck.h"
#include "Player.h"



class GameDesk {
public:

	void SetStartDeck(Deck deck);
	Deck GetTopCard();
	Deck GetBottomCard();

	int CurrentDeck();

	void DraftCard(Card played);
	//в пару можно сделать метод для отправки набора карт в сброс

	void NewPlayer(Player obj);
	void KickPlayer(int position);

	Player& PlayerN(int position);

	int CurrentPlayers()const;

	void PlaceSlotN(Card card, bool visible, int position);
	void PlaceSlot(Card card, bool visible);
	Card SlotN(int position);

	int CurrentSlots()const;

	Card FreeSlot(int position);

private:
	Deck newCards_;
	Deck oldCards_;
	std::vector<Player> players_;

	class CardSlot {
	public:

	private:
		Card current;
		bool visible_;
	};

	std::vector<CardSlot> playingGards_;

};



#endif // !GAME_DESK_H

