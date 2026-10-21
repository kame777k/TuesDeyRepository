#include "Sorcerer.h"
#include<iostream>
using namespace std;

Sorcerer::Sorcerer(int hp,int juryoku)
{
	this->hp = hp;
	this->juryoku = juryoku;
}

void Sorcerer::Showstatus()
{
	cout << "hp:" << hp << "\n呪力:" << juryoku << endl;
}

void Sorcerer::UseTechnique() {};