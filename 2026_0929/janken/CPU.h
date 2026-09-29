#pragma once
class CPU
{
private:
	int hand;
public:
	CPU();

	void RandomHand(int &hand);
	int GetHand();
	void ShowHand();
};

