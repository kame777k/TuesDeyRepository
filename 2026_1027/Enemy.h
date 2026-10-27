#pragma once
class Enemy
{
private:
	int hp;
public:
	Enemy(int hp);
	~Enemy();
	void ShowStatus()const;

	int GetHP()const;

	void Damage(int damage);
};

