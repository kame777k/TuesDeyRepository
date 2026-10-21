#pragma once
#include"Sorcerer.h"
class Gojo:public Sorcerer
{
public:
	Gojo(int hp, int juryoku);
	void UseTechnique()override;
};

