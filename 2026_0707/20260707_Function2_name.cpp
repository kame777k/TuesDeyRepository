#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260707_Header2_name.h"

using namespace std;

void Game()
{
	int player[ConstNum::CARD];
	int cpu[ConstNum::CARD];
	int playerinput[ConstNum::CARD];
	int cpuinput[ConstNum::CARD];
	bool cpuwinflag = false;
	bool playerwinflag = false;
	

	DealCard(player,ConstNum::MAX);
	DealCard(cpu,ConstNum::MAX);
	cout << "CPUとの対戦ゲームとして3つの数字を当てましょう。" << endl;

	while (!playerwinflag && !cpuwinflag)
	{
		cout << "あなたのカードは:";
		DrawCard(player);
		cout << endl;

		cout << "playerturn" << endl;
		cout << "0～9までの数字を入力してください。\n";
		Input(playerinput,ConstNum::MAX,ConstNum::MIN);
		Judment(playerinput, cpu,playerwinflag);

		cout << "cputurn" << endl;
		Inputcpu(cpuinput, ConstNum::MAX);
		Judment(cpuinput, player,cpuwinflag);
	}
	if (!playerwinflag)
	{
		cout << "貴方の勝ちです" << endl;
	}
	else
	{
		cout << "相手の勝ちです" << endl;
	}
}

void DealCard(int dealer[],int max)
{

	for (int i = 0; i < ConstNum::CARD; i++)
	{
		dealer[i] = rand() % max;
	}
}

void DrawCard(int card[])
{
	for (int i = 0; i < ConstNum::CARD; i++)
	{
		cout << card[i] << "　";
	}
}

void Input(int input[],int max, int min)
{
	for (int i = 0; i < ConstNum::CARD; i++)
	{
		while (true)
		{
			cin >> input[i];
			if (input[i] < min || input[i] > max)
			{
				cout << "入力が誤っています。\n";
			}
			else
			{
				break;
			}
		}
	}
}

void Inputcpu(int input[], int max)
{
	for (int i = 0; i < ConstNum::CARD; i++)
	{
		input[i] = rand() % max;
	}
}

void Judment(int input[], int card[],bool &winflag)
{
	int hit = 0;
	for (int i = 0; i < ConstNum::CARD; i++)
	{
		if (input[i] == card[i])
		{
			hit++;
			cout << "Hit ";
		}
		else
		{
			cout << "Miss ";
		}
	}
	if (hit == ConstNum::VICTORY)
	{
		winflag = true;
	}
	cout << endl;
}