#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
#include"Enemy.h"
using namespace std;
const int HP_MAX = 100;
const int HP_MIN = 30;
const int ADJUSTMENT = 1;
int main(void)
{


	srand(static_cast<unsigned int>(time(nullptr)));
	vector<Enemy> enemies;
	for (int i = 0; i < 3; i++)
	{
		int hp = rand() % (HP_MAX - HP_MIN + ADJUSTMENT) + HP_MIN;
		enemies.push_back(Enemy(hp));
	}

	for (const Enemy&enemy: enemies)
	{
		enemy.ShowStatus();
	}

	return 0;
}