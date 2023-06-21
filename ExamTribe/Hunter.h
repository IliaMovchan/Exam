#pragma once
#include "Human.h"

class Hunter : public Human {
public:
	Hunter();
	Hunter(int strength, int agility, int intelligence);

	~Hunter();

	void work() override;
private:
	void getInjured() override;
};

