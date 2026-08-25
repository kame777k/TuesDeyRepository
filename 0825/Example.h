#pragma once
class Example
{
	//プレイヤーができること
public:
	void Move();
	void Attack();
	void Damage(int damage);
	void ShowStatus();

	//持っているデータ
	int hp;
	int playerX, playerY;
	int attack;

};