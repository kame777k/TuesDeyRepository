#include "CPUPlayer.h"
#include<iostream>
#include"Config.h"
#include<cstdlib>

CPUPlayer::CPUPlayer(int tip) :Player(tip) {};

bool CPUPlayer::ChooseAction()
{
	int index;
	index = rand() % Config::PLAYER_RANDHAND;
	if (GetTip() <= 0)
	{
		std::cout << "チップがないため、カードを取得します。\n";
		return true;
	}
	else if (index == Config::PLAYER_ACTION_YES)
	{
		return true;
	}
	std::cout << "スキップしました。\n";
	return false;
}