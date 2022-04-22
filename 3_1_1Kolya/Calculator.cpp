#include "Calculator.h"
#include <iostream>

int Calculator::first_op(int a, char op, int b)

{
	if (op == '+')
	{
		answer = a + b;
		return a + b;
	}
	else if (op == '-')
	{
		answer = a - b;
		return a - b;
	}
	else if (op == '*')
	{
		answer = a * b;
		return a * b;
	}
	else if (op == '%')
	{
		answer = a % b;
		return a % b;
	}
}
int Calculator::operation(char op, int b)
{
	int temp = answer;
	if (op == '+')
	{
		answer = temp + b;
		return temp + b;
	}
	else if (op == '-')
	{
		answer = temp - b;
		return temp - b;
	}
	else if (op == '*')
	{
		answer = temp * b;
		return temp * b;
	}
	else if (op == '%')
	{
		answer = temp % b;
		return temp % b;
	}
}
