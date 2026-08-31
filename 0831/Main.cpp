#include<iostream>
#include<limits>
#include"Calculator.h"
using namespace std;




bool InputCheck()
{
	if (cin.fail())//cinでエラーが起きているかの確認
	{
		cin.clear();//エラー状態の解除
		cin.ignore(numeric_limits<streamsize>::max(), '\n');//入力バッファに残っている文字を捨てる。
		//numeric_limits<>　型についての情報を調べる。ここではmaxがついているので型の最大値
		//streamsize　　　　ストリームの操作で扱うサイズ（文字数など）を表すための整数型
		cout << "入力に誤りがあります。再度入力してください。\n";
		return true;
	}
	return false;
}
int Select()
{
	int input;
	cout << "続行:0 終了:1\n";
	while (true)
	{
		cin >> input;
		if (InputCheck())
		{
			continue;
		}

		if (input == 0 || input == 1)break;
		cout << "入力に誤りがあります。再度入力してください。\n";
	}
	return input;
}

void Formula(Calculator &calculator,double& sum)
{
	char oper;

	while (true)
	{
		cin >> calculator.Num1;
		if (InputCheck())
		{
			continue;
		}
		cin >> oper;
		if (InputCheck())
		{
			continue;
		}
		cin >> calculator.Num2;
		if (InputCheck())
		{
			continue;
		}

		switch (oper)
		{
		case '+':
			sum = calculator.Add();
			cout << "=" << sum;
			break;
		case '-':
			sum = calculator.Subtract();
			cout << "=" << sum;
			break;
		case '*':
			sum = calculator.Multiply();
			cout << "=" << sum;
			break;
		case '/':
			if (calculator.Num2 == 0)
			{
				cout << "エラーが発生しました。再度入力してください。\n";
				continue;
			}
			sum = calculator.Divide();
			cout << "=" << sum;
			break;
		default:
			cout << "入力に誤りがあります。再度入力してください。\n";
			continue;
		}
		break;
	}
	cout << endl;
}

int main(void)
{
	//インスタンス
	Calculator calculator;
	double sum = 0;

	do
	{
		cout << "計算を入力してください\n";
		Formula(calculator,sum);
	} while (Select() == 0);

	return 0;
}