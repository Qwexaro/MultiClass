#include "Header.h"

void setNum(int& x, std::string str)
{
	std::cout << str;
	std::cin >> x;
}

void getaNum(int x, int b, std::string str)
{
	std::cout << str << ": " << x + b;
}