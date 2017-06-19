#include <iostream>
#include <string>
//#include "Node.h"
typedef struct Node
{
	std::string value;
	Node * next;
}   Node;

Node *phead = NULL;
Node* temp = NULL;

int insert(const std::string &v)
{

	Node *ptemp = new Node();
	ptemp->value = v;
	ptemp->next = phead;
	phead = ptemp;
	return 0;
}

void ReverseList(Node **phead) 
{
	Node* headtemp = NULL;
	Node* ptemp = NULL;
	while (*phead != NULL)
	{
	ptemp = *phead;
	*phead = (*phead)->next;
	ptemp->next = headtemp;
	headtemp = ptemp;
	//	ptemp = *phead;
	//	*phead = (*phead)->next;
	//	headtemp = ptemp;
	}
	*phead = headtemp;
}

void Printlist()
{
	Node *Temp = NULL;
	while (phead != NULL) {
		Temp = phead;
		phead = phead->next;
		std::cout <<"La lista es: "<< Temp->value;
	}

}
int main() 
{
	insert("1");
	insert("2");
    Printlist();
    ReverseList(&phead);
	Printlist();
	system("Pause");
return 0;
}