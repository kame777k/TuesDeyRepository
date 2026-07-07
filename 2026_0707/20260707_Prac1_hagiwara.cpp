#include<iostream>
using namespace std;

void Input(int player[]);
void Ran();
void jud(int input[]);

namespace ConstNum
{
	const int INDEX = 10;
	const int EVEN = 2;
}

int main(void)
{
	Ran();
	return 0;
}
void Ran()
{
	int player[ConstNum::INDEX] = {};
	cout << "10‚±‚Ì”Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << endl;
	Input(player);
	jud(player);
}
void Input(int input[])
{
	for (int i = 0; i < ConstNum::INDEX; i++)
	{
		cin >> input[i];
	}
}
void jud(int input[])
{
	cout << "‹ô”\n";
	for (int i = 0; i < ConstNum::INDEX; i++)
	{
		if (input[i] % ConstNum::EVEN == 0)
		{
			cout << input[i] << "\n";
		}
	}
	cout << "Šï”\n";
	for (int i = 0; i < ConstNum::INDEX; i++)
	{
		if (input[i] % ConstNum::EVEN != 0)
		{
			cout << input[i] << "\n";
		}
	}
	
}
