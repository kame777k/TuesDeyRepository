#include "Judge.h"
#include <iostream>
#include "Config.h"
using namespace std;

void Judge::Judgement(Player* player, CPU* cpu)
{
	int playerhand = player->GetHand();
	int cpuhand = cpu->GetHand();

	int results = playerhand - cpuhand;

	if (results == Config::Judgment_Num1 || results == Config::Judgment_Num2)
	{
		cout << "PlayerWin\n";
	}
	else if (results == Config::Draw_Num)
	{
		cout << "Draw\n";
	}
	else
	{
		cout << "CPUWin\n";
	}
}
