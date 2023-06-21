#pragma once
#include "Human.h"
class Fisher : public Human {
public:
	Fisher();
	Fisher(int strength, int agility, int intelligence);

	~Fisher();

	void work() override;
private:
	void getInjured() override;
};

