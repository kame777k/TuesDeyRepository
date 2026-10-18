#pragma once
#include<vector>
#include"Config.h"
#include"Player.h"
#include"HumanPlayer.h"
#include"CPUPlayer.h"
class Game
{
private:
	enum class Turn
	{
		Human,
		CPU1,
		CPU2,
	};
	int deckOrder;
	std::vector<int> deck;
	int tip;
	int turn;
	Player *player[Config::PLAYERS_NUM];


public:
	Game();
	~Game() = default;

	void Run();

	/// <summary>
	/// 山札生成
	/// </summary>
	void DeckGeneration();

	/// <summary>
	/// 山札をシャッフル
	/// </summary>
	void DeckShuffle();

	/// <summary>
	/// カードを公開
	/// </summary>
	void CardReveal(int deckOrder);

	/// <summary>
	/// 得点計算
	/// </summary>
	/// <param name="player"></param>
	void ScoringCalculation(Player* player);

	/// <summary>
	/// 勝者を判別
	/// </summary>
	void Judgment(Player* player[]);
};

