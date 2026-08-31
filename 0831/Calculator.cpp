#include "Calculator.h"

Calculator::Calculator()
	:Num1(0)
	,Num2(0)
{

}

double Calculator::Add()
{
	return Num1 + Num2;
}

double Calculator::Subtract()
{
	return Num1 - Num2;
}
double Calculator::Multiply()
{
	return Num1 * Num2;
}

double Calculator::Divide()
{
	return Num1 / Num2;
}