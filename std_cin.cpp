#include <iostream> // for std::cout and std::cin

int main()
{
	std::cout << "Enter a number: "; // ask user for a number

	int x {}; // define variable x to hold user input (and zero-initialize it)
	std::cin >> x; // get number from keyboard and store it i variable x

	std::cout << "You entered " << x << '\n';
	return 0;
}

