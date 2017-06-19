#include <iostream>

void arbolito(const int& cols)
{
	for (int i = 0; i < cols; ++i)
	{
		for (int j = 0; j < (cols - (i+1)); ++j)
			std::cout << " ";
		for (int j = 0; j < (i * 2) + 1; ++j)
			std::cout << "*";
		std::cout << std::endl;
	}
}

int main()
{
	int a;
	std::cin >> a;
	arbolito(a);
}