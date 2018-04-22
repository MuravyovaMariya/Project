#include <iostream>
#include "stdafx.h"
using namespace std;
int main(int argc, char* argv[])
{
	if (argc != 4)
	{
		cout << "Error. Enter: x + y,x-y,x*y or x/y";
	}
	double x, y;
	x = atof(argv[1]);
	y = atof(argv[3]);
	if ('+' == *argv[2])
		cout << x + y;
	else if (*argv[2] == '-')
		cout << x - y;
	else if (*argv[2] == '*')
		cout << x * y;
	else if (*argv[2] == '/')
		cout << x / y;
	else
	{
		cout << "Error.Enter action: +,-,* or /";
	}
	return 0;
}