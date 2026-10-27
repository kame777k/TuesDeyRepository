#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
#include"Enemy.h"
using namespace std;
const int ENEMY_NUM = 3;
const int HP_MAX = 100;
const int HP_MIN = 30;
const int ADJUSTMENT = 1;
const int DAMAGE_MAX = 90;
const int DAMAGE_MIN = 20;
int main(void)
{
	//乱数初期化
	srand(static_cast<unsigned int>(time(nullptr)));
	vector<Enemy> enemies;

	for (int i = 0; i < ENEMY_NUM; i++)
	{
		int hp = rand() % (HP_MAX - HP_MIN + ADJUSTMENT) + HP_MIN;
		enemies.push_back(Enemy(hp));
	}

	//ステータス表示
	for (const Enemy& enemy : enemies)
	{
		enemy.ShowStatus();
	}


	//ダメージを与える
	cout << "攻撃する敵を選択してね\n";
	int chooise;
	while (true)
	{
		cin >> chooise;
		if (chooise > 0 && chooise <= enemies.size())
		{
			break;
		}
		cout << "入力が間違えてます\n";
	}
	

	int damage = rand() % (DAMAGE_MAX - DAMAGE_MIN + ADJUSTMENT) + DAMAGE_MIN;
	cout << "与ダメ:" << damage << endl;
	enemies[chooise-1].Damage(damage);


	//生存判定
	for (size_t i = 0; i < enemies.size(); i++)
	{
		if (enemies[i].GetHP() <= 0)
		{
			enemies.erase(enemies.begin() + i);
			cout << "被ダメにより" << i + 1 << "番目が消えました\n";
		}
	}
	

	//ステータスと数を表示
	for (const Enemy& enemy : enemies)
	{
		enemy.ShowStatus();
	}
	cout << "敵の数：" << enemies.size() << endl;

	
	return 0;
}