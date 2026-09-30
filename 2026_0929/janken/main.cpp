#include<iostream>
#include<ctime>
#include<cstdlib>
#include"Game.h"

int main(void)
{
	srand(static_cast<unsigned int>(time(nullptr)));

	Game game;

	game.Start();

	return 0;
}