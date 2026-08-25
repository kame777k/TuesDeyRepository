#include<iostream>
#include"Dog.h"
using namespace std;

int main(void)
{
	string Name;
	cout << "‚©‚í‚¢‚¢–¼‘O‚ð‚Â‚¯‚Ä‚ËI" << endl;
	cin >> Name;
	Dog dog(Name);
	dog.ShowStatus();
	return 0;
}