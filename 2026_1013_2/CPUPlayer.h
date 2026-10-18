#pragma once
#include"Player.h"
class CPUPlayer:public Player
{
public:
	CPUPlayer(int tip);
	bool ChooseAction() override;
};

