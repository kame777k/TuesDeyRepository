#pragma once
#include<vector>
class Player
{
private:
	int tip;
	std::vector<int>cards;
	int score;

public:
	Player(int tip);
	virtual ~Player() = default;
	/// <summary>
	/// カードの取得選択
	/// </summary>
	/// <returns></returns>
	virtual bool ChooseAction();

	/// <summary>
	/// カードの追加
	/// </summary>
	void AddCard(int card);

	/// <summary>
	/// カードをゲット関数
	/// </summary>
	/// <returns></returns>
	std::vector<int> GetCards();

	/// <summary>
	/// チップを減らす
	/// </summary>
	void SubtractTip();

	/// <summary>
	/// チップの取得
	/// </summary>
	/// <param name="tip"></param>
	void EarningTip(int tip);

	/// <summary>
	/// スコアの取得
	/// </summary>
	/// <param name="score"></param>
	void EarningScore(int score);

	/// <summary>
	/// スコアのゲット関数
	/// </summary>
	/// <returns></returns>
	int GetScore();

	/// <summary>
	/// チップのゲット関数
	/// </summary>
	/// <returns></returns>
	int GetTip();

};

