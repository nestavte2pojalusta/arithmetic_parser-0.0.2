#include "stdafx.h"

#include <iostream>

using namespace std;

int main()

{
	float num1, num2;
	char op, op1;

	cin >> num1;
	cin.get(op1);

	while (op1 != '\n')
	{
		cin.get(op);
		cin.get(op1);
		cin >> num2;
		cin.get(op1);

		 if (op == '-') {
			num1 = num1 - num2;
		}

		 else if (op == '+') {
			num1 = num1 + num2;
		}

		else if (op == '*') {
			num1 = num1*num2;
		}

		else if (op == '/') if (num2 == 0) { cout << "You can`t use 0"; return 0; }
		else num1 = num1 / num2;
	}

	cout << num1;
	cin.get();
	return 0;
}
