#include "CPU.h"
#include<iostream>
#include"Config.h"
#include<ctime>
#include<cstdlib>

using namespace std;

void CPU::Random_Hand()
{
	hand = rand() % Config::HAND_MAX;
}

void CPU::DisplayHand()
{
	switch (hand)
	{
	case Rock:
		cout << "CPU：グー\n";
		break;
	case Paper:
		cout << "CPU：チョキ\n";
		break;
	case Scissors:
		cout << "CPU：パー\n";
	}
}

int CPU::GetHand()
{
	return hand;
}