#pragma once
class EnemySample5
{
};

class Character
{
private:
	int hp;
public:
	Character();
	void TakeDamage(int damage);
	void ShowStatas() const;
};

class Player :public Character
{
};
class Enemy :public Character
{
};

