#include <iostream>
#include <string>
class Node 
{
public:
	std::string valor;	
	Node* R = NULL;
	Node * I = NULL;


};
Node* root = NULL;

void insert(std::string v)
{
	Node* nuevo = new Node();
	Node*ptemp = root;
	nuevo->valor = v;
	if (root == NULL)
	{
		root = nuevo;
		return;
	}
	while (true){
	 
		if (ptemp == NULL)
		{
			ptemp = nuevo;
			return;
		}
		if (ptemp->valor < nuevo->valor)
		{
			if (ptemp->R == NULL)
			{
				ptemp->R = nuevo;
				return;
			}
			else
			{
				ptemp = ptemp->R;
			}
		}
		else
		{
			if (ptemp->I == NULL) 
			{
				ptemp->I = nuevo;
				return;
			}
			else
			{
				ptemp = ptemp->I;
			}
		}

	}
}
		
void print(Node * vals) 
{
	if (vals == NULL)
		return;
	print(vals->I);
	std::cout << vals->valor << "\n";
	print(vals->R);
}

int main() 
{
	insert("3");
	insert("4");
	insert("2");
	insert("6");
	print(root);
	system("Pause");
	return 0;
}
	
	
