#pragma once

class Enemy
{
private:
	int hp;
public:
	Enemy();
	void TakeDamage(int damage);
	bool IsAlive() const;
	int GetHp()const { return hp; }
};