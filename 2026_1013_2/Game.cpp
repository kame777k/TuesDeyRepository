#include "Game.h"
#include<iostream>
#include"Config.h"
#include<cstdlib>
#include<ctime>
#include <algorithm>

using namespace std;

void Game::Run()
{
	//===========================
	//ゲーム準備
	// ===========================
	HumanPlayer humanPlayer(Config::PLAYER_INITIAL_TIP);
	CPUPlayer cpuPlayer1(Config::PLAYER_INITIAL_TIP);
	CPUPlayer cpuPlayer2(Config::PLAYER_INITIAL_TIP);

	for (int i = 0; i < Config::PLAYERS_NUM; i++)
	{
		switch (static_cast<Turn>(i))
		{
		case Game::Turn::Human:
			player[i] = &humanPlayer;
			break;
		case Game::Turn::CPU1:
			player[i] = &cpuPlayer1;
			break;
		case Game::Turn::CPU2:
			player[i] = &cpuPlayer2;
			break;
		}
	}
	
	//山札の作成
	DeckGeneration();

	//山札をシャッフル
	DeckShuffle();

	//使用するカードに絞る
	deck.resize(Config::CARDS_USED);

	//チップを配布
	
	//===========================
	//ゲームスタート
	//===========================
	while (deck.size() > deckOrder)
	{
		switch (static_cast<Turn>(turn))
		{
		case Game::Turn::Human:
			cout << "プレイヤーのターン\n";
			break;
			case Game::Turn::CPU1:
			cout << "CPU1のターン\n";
			break;
			case Game::Turn::CPU2:
			cout << "CPU2のターン\n";
			break;
		}
	
		//カードをオープン
		CardReveal(deckOrder);

		//取得判定
		if (player[turn]->ChooseAction())
		{
			cout << "カードとチップを取得しました。\n";

			//カードとチップを渡す
			player[turn]->EarningTip(tip);
			player[turn]->AddCard(deck[deckOrder]);
			//チップの初期化とデッキの順番を進める
			tip = 0;
			deckOrder++;
		}
		else
		{
			//チップの支払い
			player[turn]->SubtractTip();
			//チップを増やす
			tip++;
		}

		//ターンの進行
		turn++;

		if (turn >= Config::PLAYERS_NUM)
		{
			turn = 0;
		}
	}
	//得点計算
	for (int i = 0; i < Config::PLAYERS_NUM; i++)
	{
		ScoringCalculation(player[i]);
	}
	Judgment(player);


}


Game::Game()
{
	//乱数初期化
	srand(static_cast<unsigned int>(time(nullptr)));

	for (int i = 0; i < Config::PLAYERS_NUM; i++)
	{
		player[i] = nullptr;
	}

	deckOrder = 0;
	turn = 0;
	tip = 0;
}

void Game::DeckGeneration()
{
	for (int i = 0; i < Config::CARD_NUM_MAX; i++)
	{
		deck.emplace_back(i + Config::CARD_NUM_MIN);
	}

}

void Game::DeckShuffle()
{
	int index1;
	int index2;

	for (size_t i = 0; i < deck.size(); i++)
	{
		index1 = rand() % deck.size();
		index2 = rand() % deck.size();

		swap(deck[index1], deck[index2]);
	}
}

void Game::CardReveal(int deckOrder)
{
	cout << deckOrder + 1 <<"番目のカード：" << deck[deckOrder] << endl;
}


void Game::ScoringCalculation(Player* player)
{
	// 獲得したカードを取得
	vector<int> cards = player->GetCards();

	// カードを小さい順に並べる
	sort(cards.begin(), cards.end());

	// カードの合計点
	int score = 0;

	// カードがある場合だけカードの得点を計算する
	for (size_t i = 0; i < cards.size(); i++)
	{
		if (i == 0)
		{
			score += cards[i];
		}
		else if (cards[i] != cards[i - 1] + 1)
		{
			score += cards[i];
		}
	}

	// チップによる減点
	score -= player->GetTip();

	player->EarningScore(score);

}

void Game::Judgment(Player *player[])
{
	int minScore = 0;

	// 最低点を探す
	for (int i = 0; i < Config::PLAYERS_NUM; i++)
	{
		if (i == 0)
		{
			minScore = player[i]->GetScore();
		}
		else if (player[i]->GetScore() < minScore)
		{
			minScore = player[i]->GetScore();
		}
	}

	cout << "勝者：";
	for (int i = 0; i < Config::PLAYERS_NUM; i++)
	{
		if (player[i]->GetScore() == minScore)
		{
			switch (i)
			{
			case 0:
				cout << "player ";
				break;
			case 1:
				cout << "cpu1 ";
				break;
			case 2:
				cout << "cpu2 ";
				break;
			}
		}
	}

	cout << endl;
}