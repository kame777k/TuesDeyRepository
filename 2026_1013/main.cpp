#include<iostream>
#include "Player.h"
#include "Enemy.h"
#include "Boss.h"
#include "Wizard.h"
#include "BattleManager.h"
int main(void)
{
	//コンストラクタ
	Player player("トマト");
	Enemy enemy("唐辛子");
	Boss boss("リンゴ");
	Wizard wizard("いちご");
	BattleManager manager;


	manager.StartBattle(&player);
	manager.StartBattle(&enemy);
	manager.StartBattle(&boss);
	manager.StartBattle(&wizard);

	return 0;
}
