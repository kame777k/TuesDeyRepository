#pragma once

class Calculator
{

public:
	double Num1;
	double Num2;

	//コンストラクタ
	Calculator();

	/// <summary>
	/// 足し算
	/// </summary>
	double Add();
	/// <summary>
	/// 引き算
	/// </summary>
	double Subtract();
	/// <summary>
	/// 掛け算
	/// </summary>
	double Multiply();
	/// <summary>
	/// 割り算
	/// </summary>
	double Divide();
};

