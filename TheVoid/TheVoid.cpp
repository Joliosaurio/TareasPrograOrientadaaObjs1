#include <iostream>

int mult(const int& a, const int& b)
{
	int tempbb = 0;
	int tempa = a;
	int tempb = b;
	int signob = b - b - b;
	if (a == 0 || b == 0) 
	{
		std::cout << 0 << "\n";
		return 0;
	}
	if (a > 0 && b > 0) //Positivos
	{
		for (int i = 0; i < a ; i++) //Se multiplica de acuerdo a a
		{
			tempbb += b;
		}
		std::cout << tempb << "\n";
		return tempbb;
	}
	if (a < 0 && b < 0)
	{
		tempa = a - a - a;
		tempb = b - b - b;
		for (int i = 0; i < tempb; i++)
		{
			tempbb += tempa;
		}
		std::cout << tempbb << "\n";
		return tempbb;
	}
	if (a < 0) 
	{
		for (int i = 0; i < tempb; i++) 
		{
			tempbb += b;
		}
		std::cout << tempbb << "\n";
	}
	if (b < 0) 
	{
		for (int i = 0; i < tempa; i++)
		{
			tempbb += b;
		}
		std::cout << tempbb << "\n";
	}
	return 0;
}





int main()
{
	int y = -20 , x = -20;
	mult(y, x);
	system("Pause");
	return 0;
}