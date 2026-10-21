#pragma once
class Sorcerer
{
public:
	Sorcerer(int hp, int juryoku);
	virtual void UseTechnique() = 0;

	virtual void Showstatus();
	virtual ~Sorcerer() = default;

private:
	int hp;
	int juryoku;
};
