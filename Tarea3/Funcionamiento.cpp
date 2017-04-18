#include <iostream>

void main() 
{
	int x = 0, y = 7, z = 6;
	if (y == 5||z == 6 && x == 0)  //De acuerdo a la precedencia por ende se hara primero el and 
	{                                //Y por los operadores usados se hacen de izquierda a derecha.
		std::cout << "Hola" << std::endl;
		system("pause");
	
	}
}