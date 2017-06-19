#include <iostream>
#include <vector>
std::vector<int> Vec;


int Busca(const std::vector<int>, const int &value)
{
	int ls = 0, li = 0; //Límite inferior 
	ls = Vec.size() - 1; //límite superior
	bool encontrado = false;

	while (ls >= li)
	{
		int NInd = (li + ls) / 2; //Nuevo índice.
		if (value == Vec.at(NInd)) {encontrado = true;}
		if (encontrado) return NInd;
		if (value <  Vec.at(NInd))
		{
			ls = NInd - 1;
		}
		else if (value > Vec.at(NInd))
		{
			li = NInd + 1;
		}
		
	}
	if(!encontrado)	return -1;
}


int main()
{
	Vec.push_back(1);
	Vec.push_back(2);
	Vec.push_back(9);
	Vec.push_back(13);
	Vec.push_back(20);
	Vec.push_back(24);
	Vec.push_back(27);
	Vec.push_back(50);
	std::cout << Busca(Vec, 50)<< "\n";
	system("Pause");
	return 0;
}