#include "Inumaki.h"
#include<iostream>
using namespace std;

Inumaki::Inumaki(int hp, int juryoku) :Sorcerer(hp, juryoku) {};

void Inumaki::UseTechnique()
{
	cout << "術式：呪言\n";
}