#include "Player.h"
#include<iostream>
#include"Config.h"
#include <cstdlib>
using namespace std;

Player::Player(int tip)
{
	this->tip = tip;
	score = 0;
}

bool Player::ChooseAction()
{
	int index;
	index = rand() % Config::PLAYER_RANDHAND;
	if (tip <= 0)
	{
		return true;
	}
	else if (index == Config::PLAYER_ACTION_YES)
	{
		return true;
	}
	return false;
}

vector<int> Player::GetCards()
{
	return cards;
}

void Player::AddCard(int card)
{
	cards.emplace_back(card);
}

void Player::EarningTip(int tip)
{
	this->tip += tip;
}

void Player::SubtractTip()
{
	tip--;
}

void Player::EarningScore(int score)
{
	this->score = score;
}

int Player::GetScore()
{
	return score;
}

int Player::GetTip()
{
	return tip;
}