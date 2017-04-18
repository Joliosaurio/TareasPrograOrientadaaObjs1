#include <iostream>

char texto[] = "amada la dama";

bool EsPalindromo(char*texto, int Length)
{
	int i = 0, j = Length - 1;
	while (texto[i] == texto[j] && i++ < j--) {
		if (texto[i] == 32)
		{
			++i;		
		} 
		if (texto[j] == 32)
		{
			--j;
		}
	}
		
		return (i >= j) ? true : false;
}
void main()
{
	std::cout << EsPalindromo(texto, 13) << std::endl; //Es palindromo cuando el resultado es 1
	system("pause");
}