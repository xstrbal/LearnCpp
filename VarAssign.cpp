#include <iostream>

int main()
{
	int width;
	width = 5;
	std::cout << width << std::endl;

	width = 7;
	std::cout << width << std::endl;


	int a;
	int b = 5;
	int c( 6 );
	int d { 7 };

	std::cout << a << b << c << d << std::endl;

	int w { 5 };
	int h = { 6 };
	int d1  {};
	std::cout << w << std::endl;
	std::cout << h << std::endl;
	std::cout << d1 << std::endl;

	return 0;
}
