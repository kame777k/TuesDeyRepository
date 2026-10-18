#include "HumanPlayer.h"
#include<iostream>
#include"Config.h"

using namespace std;

HumanPlayer::HumanPlayer(int tip):Player(tip)
{

}

bool HumanPlayer::ChooseAction()
{
	// チップがない場合は必ずカードを取得する
	if (GetTip() <= 0)
	{
		cout << "チップがないため、カードを取得します。\n";
		return true;
	}

	int input;
	cout << "スキップ0\nカードを取得:1\n" << endl;
	while (true)
	{
		cin >> input;
		if (input <= Config::PLAYER_ACTION_YES && input >= Config::PLAYER_ACTION_NO)
		{
			break;
		}
		cout << "入力に誤りがあります。再度入力してください\n";
	}
	if (input == Config::PLAYER_ACTION_YES)
	{
		return true;
	}
	cout << "スキップしました。\n";
	return false;
}