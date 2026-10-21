#pragma once
#include"Sorcerer.h"
class Megumi:public Sorcerer
{
public:
	Megumi(int hp, int juryoku);
	void UseTechnique()override;
};
