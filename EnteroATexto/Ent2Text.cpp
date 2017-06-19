#include <iostream>
#include <string>

std::string itos(int val)
{
	std::string final = "";
	char num = 48;
	while (val)
	{
		std::string l;
		char a = (num + (val % 10));
		l = a;
		l += final;
		final = l;
		val /= 10;
	}
	return final;
}
int main()
{
	std::cout << itos(50000);
	return 0;
}