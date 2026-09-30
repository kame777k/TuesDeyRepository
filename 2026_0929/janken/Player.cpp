#include "Player.h"
#include<iostream>
#include"Config.h"

using namespace std;

void Player::InputCheck()
{
	while (true)
	{
		cin >> hand;
		if (hand >= Config::HAND_MIN && hand < Config::HAND_MAX)
		{
			break;
		}
		cout << "入力が誤っています。再度入力してください\n";
	}
}

void Player::DisplayHand()
{
	switch (hand)
	{
	case Rock:
		cout << "あなた：グー\n";
		break;
	case Paper:
		cout << "あなた：チョキ\n";
		break;
	case Scissors:
		cout << "あなた：パー\n";
	}
}

int Player::GetHand()
{
	return hand;
}