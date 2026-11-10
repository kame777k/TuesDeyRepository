#include<iostream>
#include"EnemySample5.h"
int main(void)
{
	Player player;
	Enemy enemy;

	Character* target = &enemy;

	target->TakeDamage(30);

	enemy.ShowStatas();

	return 0;
}
