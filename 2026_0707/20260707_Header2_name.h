#pragma once

namespace ConstNum
{
	const int CARD = 3;
	const int MIN = 0;
	const int MAX = 9;
	const int VICTORY = 3;
}

void Game();
void DealCard(int dealer[], int max);
void DrawCard(int card[]);
void Input(int input[], int max, int min);
void Inputcpu(int input[], int max);
void Judment(int input[], int card[], bool& winflag);