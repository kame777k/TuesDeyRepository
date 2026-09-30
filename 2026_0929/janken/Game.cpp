#include"Game.h"
#include<iostream>

using namespace std;

void Game::Start()
{
	cout << "=========================じゃんけんスタート=========================\n";
	cout << "出す手を選んでください\n0:グー1:チョキ2:パー\n";
	player.InputCheck();
	player.DisplayHand();
	cpu.Random_Hand();
	cpu.DisplayHand();
	judge.Judgement(&player, &cpu);

}