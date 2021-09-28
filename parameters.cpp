#include <iostream>

int number()
{
	std::cout << "Enter an integer: ";
	int x{};
	std::cin >> x;

	return x;
}

int doubleNumber(int x)
{
	return x * 2;
}

int main()
{
	int num = number();
	std::cout << doubleNumber(num) << '\n';

	return 0;
}

