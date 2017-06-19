#include <iostream>
#include <vector>
std::vector<int> Vec1;
std::vector<int> Vec2;
std::vector<int> merge(std::vector<int> v1, std::vector<int> v2)
{
	std::vector<int> VecTemp;
	int vect1, vect2, n, j; //Tamaños vectores.
	vect1 = v1.size();
	vect2 = v2.size();;
	int MaxV1 = vect1;
	int MaxV2 = vect2;
	n = vect1 - MaxV1;
	j = vect2 - MaxV2;
	int total = MaxV1 + MaxV2;
	
	if (vect1 = vect2) {
		for (int i = 0; i <= vect1; ++i)
		{
			if (Vec1.at(n) < Vec2.at(j))
			{
				VecTemp.push_back(Vec1.at(n));
				n++;
				
			}
			if (Vec1.at(n) > Vec2.at(j))
			{
				VecTemp.push_back(Vec2.at(j));
				j++;
			}
			if (Vec1.at(n) == Vec2.at(j))
			{
				VecTemp.push_back(Vec1.at(n));
				n++;
			}
		}
	}
	if (vect1 < vect2)
	{
		for (int i = 0; i <= vect2; ++i)
		{
			if (Vec1.at(n) < Vec2.at(j))
			{
				VecTemp.push_back(Vec1.at(n));
				n++;
				
			}
			if (Vec1.at(n) > Vec2.at(j))
			{
				VecTemp.push_back(Vec2.at(j));
				j++;
				
			}
			if (Vec1.at(n) == Vec2.at(j))
			{
				VecTemp.push_back(Vec1.at(n));
				n++;
				
			}
		}
		if (!MaxV2)
		{
			return v1;
		}
		if (!MaxV1) 
		{
			return v2;
		}
	
	
	}
	
	return VecTemp;
}

int main()
{
	Vec1.push_back(1);
	Vec1.push_back(2);
	Vec1.push_back(3);
	Vec1.push_back(7);
	Vec1.push_back(9);
	Vec1.push_back(10);

	Vec2.push_back(1);
	Vec2.push_back(4);
	Vec2.push_back(5);
	Vec2.push_back(6);
	Vec2.push_back(8);
	Vec2.push_back(9);

	merge(Vec1, Vec2);
	std::cout << merge;

	return 0;
}