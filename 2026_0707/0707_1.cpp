#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void ShowArry(int ary [],int index);
void AddArry(int ary[], int index);

int main(void)
{
	//配列
	int ary[10] = {};
	srand((unsigned)time(NULL));

	ShowArry(ary, 10);
	cout << "追加:" << endl;
	AddArry(ary, 10);
	cout << "表示:" << endl;
	ShowArry(ary,10);
	return 0;
}

void ShowArry(int ary[],int index)
{
	for (int i = 0; i < index; i++)
	{
		cout << ary[i] << endl;
	}
}

void AddArry(int ary[], int index)
{
	for (int i = 0; i < index; i++)
	{
		ary[i] = rand() % 100;
	}
}

//ポインター渡し
//ary[] == の[]は何も入れない

//関数に配列を渡す
//配列の書き方
/*
void hoge(データ型 配列名[],インデックス)
{
	//処理
}
呼び出し先は
hoge(配列名,インデックス(添え字));
*/