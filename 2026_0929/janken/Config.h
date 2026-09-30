#pragma once

enum Hand_Type
{
	Rock,
	Paper,
	Scissors
};

namespace Config
{
	constexpr int HAND_MIN = 0;
	constexpr int HAND_MAX = 3;
	constexpr int Judgment_Num1 = 2;
	constexpr int Judgment_Num2 = -1;
	constexpr int Draw_Num = 0;
}