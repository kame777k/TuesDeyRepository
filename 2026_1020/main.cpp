#include<iostream>
#include"Megumi.h"
#include"Inumaki.h"
#include"Gojo.h"

using namespace std;

int main(void)
{
	Megumi megumi(100,80);
	Inumaki inumaki(90,70);
	Gojo gojo(999,999);

	Sorcerer* p[3] = { &megumi,&inumaki,&gojo };

	for (int i = 0; i < 3; i++)
	{
		p[i]->Showstatus();
		p[i]->UseTechnique();
		cout << endl;
	}

	return 0;
}