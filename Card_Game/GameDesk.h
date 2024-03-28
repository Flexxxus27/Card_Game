#pragma once

#ifndef GAME_DESK_H
#define GAME_DESK_H

#include <vector>

#include "Card.h"
#include "Deck.h"
#include "Player.h"

class IViewerDesk {
public:
	virtual int CurrentDeck()const = 0;
	virtual const Player& PlayerN(int position)const = 0;
	virtual int CurrentSlots()const = 0;
	virtual Card SlotN(int position)const = 0;
};

class GameDesk:public IViewerDesk {
public:

	void SetStartDeck(Deck deck);
	Deck GetTopCard();
	Deck GetBottomCard();

	Deck ShowTopCard()const;
	Deck ShowBottomCard()const;

	int CurrentDeck()const;

	void DraftCard(Card played);
	//в пару можно сделать метод для отправки набора карт в сброс

	void NewPlayer(Player obj);
	void KickPlayer(int position);

	Player& PlayerN(int position);

	int CurrentPlayers()const;

	void PlaceSlotN(Card card, bool visible, int position);
	void PlaceSlot(Card card, bool visible);
	Card SlotN(int position)const;

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

