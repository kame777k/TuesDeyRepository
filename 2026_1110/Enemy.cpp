#include"Enemy.h"
#include"Config.h"
#include<iostream>

Enemy::Enemy() :hp(Config::ENEMY_HP_MAX) {}

void Enemy::TakeDamage(int damage)
{
	hp -= damage;
	if (hp < 0) hp = 0;
}

bool Enemy::IsAlive()const
{
	return hp > 0;
}