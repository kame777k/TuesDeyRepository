#include "Gojo.h"
#include<iostream>
using namespace std;

Gojo::Gojo(int hp, int juryoku):Sorcerer(hp,juryoku){}

void Gojo::UseTechnique()
{
	cout << "術式：無下限術式\n";
}