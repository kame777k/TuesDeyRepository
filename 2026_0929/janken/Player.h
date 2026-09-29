#pragma once
class Player
{
private:
	int hand;
public:

	Player();

	void InputCheck(int &hand);
	int GetHand();
	void ShowHand();
};

