#include <iostream>
#include <vector>
// Vector 1
std::vector<int> Vec1;
// Vector 2
std::vector<int> Vec2;
std::vector<int> merge(std::vector<int> v1, std::vector<int> v2)
{
	std::vector<int> VecTemp;
	// Tamano vector 1
	int vect1;
	// Tamano vector 2
	int vect2;
	// Indice vector 1
	int n;
	// Indice vector 2
	int j;

	vect1 = v1.size();
	vect2 = v2.size();
	//int MaxV1 = vect1;
	//int MaxV2 = vect2;
	n = 0;  //V1 indice
	j = 0;  //V2 indice
	int total = vect1 + vect2;

	if (vect1 > vect2  && vect2 != 0)
	{
		for (int i = 0; i < vect1; ++i)
		{
			if (n == vect2) { std::cout << Vec1.at(i); }

			else if (Vec2.at(n) < Vec1.at(i))
			{
				VecTemp.push_back(Vec1.at(n));
				std::cout << Vec2.at(n) << " ";
				++n;
				--i;
			}
			else if (Vec2.at(n) > Vec1.at(i))
			{
				VecTemp.push_back(Vec2.at(i));
				std::cout << Vec1.at(i) << " ";
			}
			else if (Vec2.at(n) == Vec1.at(i))
			{
				VecTemp.push_back(Vec2.at(n));
				VecTemp.push_back(Vec1.at(i));
				std::cout << Vec2.at(n) << " " << Vec1.at(i) << " ";
				++n;
			}
		}
	}
	else if (vect2 > vect1 && vect1 != 0)
	{
		for (int i = 0; i < vect2; ++i)
		{
			if (n == vect1) { std::cout << Vec2.at(i); }

			else if (Vec1.at(n) < Vec2.at(i))
			{
				VecTemp.push_back(Vec1.at(n));
				std::cout << Vec1.at(n) << " ";
				++n;
				--i;			
			}
			else if (Vec1.at(n) > Vec2.at(i))
			{
				VecTemp.push_back(Vec2.at(i));
				std::cout << Vec2.at(i) << " ";
			}
			else if (Vec1.at(n) == Vec2.at(i))
			{
				VecTemp.push_back(Vec1.at(n));
				VecTemp.push_back(Vec2.at(i));
				std::cout << Vec1.at(n) << " " << Vec2.at(i) << " ";
				++n;
			}
		}
		
	}
	else if (vect1 == 0 && vect2 > 0)
	{
		for (int i = 0; i < vect2; ++i) 
		{
			std::cout << Vec2.at(i) << " ";
		}
	}
	else if (vect2 == 0 && vect1 > 0) 
	{
		for (int i = 0; i < vect1; ++i) 
		{
			std::cout << Vec1.at(i) << " ";
		}
	
	}
	
	return VecTemp;
}

int main()
{
	Vec1.push_back(1);
	Vec1.push_back(2);
	Vec1.push_back(3);
	Vec1.push_back(6);
	Vec1.push_back(7);
	Vec1.push_back(9);

	Vec2.push_back(1);
	Vec2.push_back(4);
	Vec2.push_back(5);
	Vec2.push_back(6);


	merge(Vec1, Vec2);

	return 0;
}