#pragma once
class Run
{
private:
	void Selection();
	void EnemyDetection();
	void DamageHandling();

	int input = 0;
public:
	Run();
	void Start();
};

