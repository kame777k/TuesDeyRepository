#include<iostream>
#include"Header.h"
using namespace std;


void Damage(int *p)
{
	*p -= DAMAGE;
}


void Heal(int* p)
{
	*p += HEAL;
	if (*p > MAX_HP)
	{
		*p = MAX_HP;
	}
}

void Input(int *p)
{
	while (true)
	{
		cin >> *p;
		if (*p >= 0 && *p <= 1)break;
		cout << "再度入力してください。\n";
	}
}

void Game()
{
	int hp = MAX_HP;
	int input;

	for(int i= 0; i < 3; i++)
	{
		cout << "現在の体力:" << hp << endl;
		cout << "0:ダメージ1:回復\n入力してください。\n";
		Input(&input);

		switch (input)
		{
		case 0:
			Damage(&hp);
			cout << "ダメージを受けた\n";
			break;
		case 1:
			Heal(&hp);
			cout << "回復した\n";
			break;
		}
	}

	cout << "最終の体力:" << hp << endl;
}