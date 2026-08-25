#include "Dog.h"
#include<iostream>

Dog::Dog(string Name)
{
	name = Name;
}

void Dog::ShowStatus()
{
	cout << "‹M•û‚ÌŒ¢‚Ì–¼‘O‚Í" << name << "‚ÉŒˆ‚Ü‚Á‚½‚æI" << endl;
}
