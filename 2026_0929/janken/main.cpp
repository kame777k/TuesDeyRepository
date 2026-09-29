#include<istream>
#include<ctime>
#include<cstdlib>
#include"Game.h"

int main(void)
{
	srand(static_cast<unsigned int>(time(nullptr)));
	Game game;
	game.Rock_Paper_Scissors();

	return 0;
}