#include "Character.h"
#include <iostream>
using namespace std;
void Character::Attack()
{
	cout << "UŒ‚‚ð‚·‚é" << endl;
}
Character::Character(string name)
{
	this->name = name;
}

string Character::GetName()
{
	return name;
}