//Momento de darte ban
#include <iostream>
int mult(const int a, const int b)
{
	int resultado = 0;
	for (int i = 0; i <= b; i++) 
	{
		if (a == 0 || b == 0) // Si uno de los números es cero
			resultado = 0;
		if (b < 0 && a > 0) // Si b es negativo pa sacar negativos we
			resultado = a - a;
		if (a < 0 && b > 0)
			resultado = a - a;

	}
	
	

	return 0;
}

int main() 
{
	std::cout << "Ni si quiera le sale we." << "\n";
	system("pause");
	return 0;
}
