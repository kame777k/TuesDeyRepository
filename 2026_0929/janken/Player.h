#pragma once

class Player
{
public:
	void InputCheck();
	void DisplayHand();
	int GetHand();
private:
	 int hand;
};