#include <iostream>

int main()
{
	std::cout << 2 + 3 << '\n';

	int x{ 6 };
	int y{ x - 2 };
	std::cout << y << '\n';

	int z{ 0 };
	z = x;
	std::cout << z - x << '\n';

	return 0;
}
