#include <iostream>
#include <string>
//#include "Node.h"
typedef struct Node
{
	std::string value;
	Node * next;
}   Node;

Node *phead = NULL;

int insert(const std::string &v)
{

	Node *ptemp = new Node();
	ptemp->value = v;
	ptemp->next = phead;
	phead = ptemp;
	return 0;
}
void Printlist()
{
	Node *Temp = phead;
	while (phead != NULL) {
		Temp = phead;
		phead = phead->next;
		std::cout << Temp->value;
	}

}

int main()
{
	insert("a");
	insert("b");
	insert("c");
	Printlist();
	return 0;
	system("Pause");
}


