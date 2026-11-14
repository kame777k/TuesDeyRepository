#include "Run.h"
#include"Enemy.h"
#include"Config.h"
#include<iostream>
using namespace std;

Run::Run()
{}

void Run::Selection()
{
	while (true)
	{
		cin >> input;
		if (0 > input && input <= Config::ENEMY_NUM)
		{
			break;
		}
		cout << "“ü—Í‚ªŒë‚Á‚Ä‚¢‚Ü‚·\n";
	}
}

void Run::EnemyDetection()
{
	switch (input)
	{
	case 1:
		break;
	default:
		break;
	}
}


void Run::DamageHandling()
{

}


void Run::Start()
{
	unique_ptr<Enemy>enemy1 = make_unique<Enemy>();
	unique_ptr<Enemy>enemy2;
	unique_ptr<Enemy>enemy3;

	cout << "UŒ‚‚·‚é“G‚ð‘I‘ð‚µ‚Ä‚­‚¾‚³‚¢\n1`3\n";
	Selection();

}

