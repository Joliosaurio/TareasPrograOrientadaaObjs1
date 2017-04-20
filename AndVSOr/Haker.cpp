#include <iostream>
#include <math.h>

unsigned long int BitCount(unsigned long int n) 
{
	unsigned long int res = 0;
	while (n != 0)
	{
		if ((n & 1) == 0) 
		{
			++res;
		}
		
		n = n >> 1;
		
	}
	
	return res;
}

int main() 
{
	unsigned long int n;
  std::cin >> n;
 
  unsigned long pene;
  pene = pow(2, BitCount(n));
  std::cout << pene;
  return pene;
  
}
