#pragma once
#ifndef DECK_H
#define DECK_H

#include <vector>
#include "Card.h"

class Deck {
public:
	Deck();

	void Shufle();

	void PutTop(Card card);
	void PutBottom(Card card);

	Card& Top();
	Card& Bottom();

	Card& operator[](int i);
	const Card& operator[](int i)const;

	int Count()const;

private:
	std::vector<Card> cards_;
};





#endif