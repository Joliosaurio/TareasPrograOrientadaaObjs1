#include <iostream>
#include <vector>
std::vector<int> vec;
int main()
{
	std::cout << "Inserte numeros, inserte un número negativo para terminar."<<"\n";
	int suma = 0;
	int numero;
	bool magia = true;
	while (magia)
	{
		std::cin >> numero;
		if (numero < 0) 
		{
			magia = false;
		}
		else 
		{
			suma += numero;
		}
		if (!magia) 
		{
			std::cout << "La suma es: "<< suma<<"\n";
		}
	}
	
	system("Pause");
	return 0;
}


//std::cout << "Inserte numeros: " << "\n";
//std::cout << "Inserte un número negativo para parar." << "\n";
//int numeros;
//int sum = 0;
//bool magia = true;
//while (magia)
//{
//
//	std::cin >> numeros;
//	if (numeros < 0)
//	{
//		magia = false;
//		for (int i = 0; i < vec.size(); i++) { sum += vec[i]; }
//
//	}
//	else
//	{
//		vec.push_back(numeros);
//	}
//	if (!magia)
//	{
//		std::cout << "La suma es: " << sum << "\n";
//	}
//
//}