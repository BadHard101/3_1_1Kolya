#include "Calculator.h"
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	char op;
	cin >> a >> op >> b;
	Calculator calc;
	int answer = calc.first_op(a, op, b);
	int flag = 2;
	while (op != 'C')
	{
		cin >> op;
		if (op == 'C')
			break;
		else
		{
			cin >> b;
			answer = calc.operation(op, b);
			if (flag == 3)
			{
				cout << answer;
				flag++;
			}
			else if (flag / 3 > 1 && flag % 3 == 0)
			{
				cout << endl;
				cout << answer;
				flag++;
			}
			else
				flag++;
		}
	}
}
