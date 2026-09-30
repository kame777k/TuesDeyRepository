#pragma once
#include"Player.h"
#include"CPU.h"
#include"Judge.h"
class Game
{
public:
	Player player;
	CPU cpu;
	Judge judge;
	void Start();
};

