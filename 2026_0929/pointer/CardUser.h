#pragma once
class CardUser
{
protected:
	int total;
public:
	CardUser();

	void AddCard(int card);
	int GetTotal();
	void ShowStatus();
};

