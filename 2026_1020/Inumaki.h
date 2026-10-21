#pragma once
#include"Sorcerer.h"
class Inumaki:public Sorcerer
{
public:
	Inumaki(int hp, int juryoku);
	void UseTechnique()override;
};

