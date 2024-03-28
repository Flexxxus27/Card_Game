#pragma once
#ifndef FOOL_H
#define FOOL_H

#include "Rules.h"


class Fool :public Rules {
public:
	void PlayMove(const GameDesk& obj) override {
		auto &current = obj.PlayerN(this->activePlayer);
		Action act = current.Action(const IViewerDesk & obj, this->Actions());
		if (this->IsPossible(act, obj)) {
			//делаем действие
		}
	}
};

#endif // !FOOL_H
