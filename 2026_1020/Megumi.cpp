#include "Megumi.h"
#include<iostream>

using namespace std;

Megumi::Megumi(int hp, int juryoku) :Sorcerer(hp, juryoku) {};

void Megumi::UseTechnique()
{
	cout << "術式：十種影法術\n";
}