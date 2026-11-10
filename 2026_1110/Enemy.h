#pragma once

class Enemy
{
private:
	int hp;
public:
	Enemy();
	void TakeDamage(int damage);
	void ShowStatus()const;
	int GetHp()const { return hp; }
};