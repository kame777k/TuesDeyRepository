#include "Enemy.h"
#include<iostream>
using namespace std;

Enemy::Enemy(int hp) :hp(hp) {};

Enemy::~Enemy() {};

int Enemy::GetHP()const
{
	return hp;
}

void Enemy::Damage(int damage)
{
	hp -= damage;
}

void Enemy::ShowStatus()const
{
	cout << hp << endl;
}

