#pragma once

namespace Config
{
	//プレイ人数
	constexpr int PLAYERS_NUM = 3;
    //カード設定
	constexpr int CARD_NUM_MIN = 3;
	constexpr int CARD_TOTAL_NUM = 35;

	constexpr int CARD_NUM_MAX = CARD_TOTAL_NUM - CARD_NUM_MIN + 1;

	constexpr int CARDS_USED = 24;

	//チップ
	constexpr int PLAYER_INITIAL_TIP = 11;
	constexpr int TOTAL_TIP = 33;

	//プレイヤーの手
	constexpr int PLAYER_RANDHAND = 2;
	constexpr int PLAYER_ACTION_YES = 1;
	constexpr int PLAYER_ACTION_NO = 0;

}