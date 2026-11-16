#include "Run.h"
#include"Enemy.h"
#include"Config.h"
#include<iostream>
#include<memory>
#include<vector>
using namespace std;


void Run::Start()
{
	
	vector<unique_ptr<Enemy>> enemies;

	//“G‚ğ¶¬
	for (int  i = 0; i < Config::ENEMY_NUM; i++)
	{
		enemies.push_back(make_unique<Enemy>());
	}
	int defeatedNum = 0;

	while (defeatedNum < Config::ENEMY_NUM)
	{
		defeatedNum = 0;
		//“ü—Í”»’è
		cout << "1`3‚Ì’†‚©‚ç“G‚ğ‘I‘ğ‚µ‚Ä‚­‚¾‚³‚¢\n";
		while (true)
		{

			cin >> input;
			if (input > 0 && input <= Config::ENEMY_NUM)
			{
				if (!enemies[input - 1]->IsAlive())
				{
					cout << "‚»‚Ì“G‚Í‚·‚Å‚É“|‚³‚ê‚Ä‚¢‚Ü‚·\n";
					continue;
				}
				break;
			}
			cout << "“ü—ÍƒGƒ‰[\nÄ“x“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n";
		}


		//UŒ‚ˆ—
		enemies[input - 1]->TakeDamage(Config::ATTACK_DAMAGE);


		//•`‰æ
		for (int i = 0; i < enemies.size(); i++)
		{
			cout << "“GF" << i + 1 << "HPF" << enemies[i]->GetHp() << endl;
		}

		for (int i = 0; i < enemies.size(); i++)
		{
			if (!enemies[i]->IsAlive())
			{
				defeatedNum++;
			}
		}
	}
	cout << "‚·‚×‚Ä‚Ì“G‚ğ“|‚µ‚Ü‚µ‚½\n";
	
}

