#include<iostream>
#include"EnemySample4.h"

int main(void)
{
	//EnemySample4 enemy1;
	//EnemySample4 enemy2;
	//EnemySample4 enemy3;

	//EnemySample4* target = &enemy1;

	//target->TakeDamage(30);

	//target = &enemy2;
	//target->TakeDamage(50);

	//enemy1.ShowStatus();
	//enemy2.ShowStatus();
	//enemy3.ShowStatus();

	std::unique_ptr<EnemySample4>enemy1 = std::make_unique<EnemySample4>();

	enemy1->ShowStatus();
	std::unique_ptr<EnemySample4>enemy2;
	enemy2 = std::move(enemy1);
	enemy2->TakeDamage(30);
	enemy2->ShowStatus();

	return 0;
}