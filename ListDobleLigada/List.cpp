#include "List.h"
#include <iostream>
Node *phead = NULL;
Node *ptail = NULL;


void DoubleLinkedList::insert(const std::string & v)
{
	Node* ptemp = new Node();
	ptemp->value = v;
	if (phead == NULL) 
	{
		phead = ptemp;
		ptail = ptemp;
	}
	if (ptail != NULL)
	{
		ptail->next = ptemp;
		ptemp->prev = ptail;
		ptail = ptemp;
	}

}

void DoubleLinkedList::remove(const std::string & v)
{
	Node* ptemp = phead;
	while (ptemp != nullptr)
	{
		if (v == phead->value)
		{
			ptemp->next->prev = ptemp->prev;
			ptemp->prev->next = ptemp->next;
			if (ptemp == phead) phead = phead->next;
			delete(ptemp);
			return;
		}
			ptemp = ptemp->next;
		


	}
	

}

DoubleLinkedList::DoubleLinkedList()
{
}

DoubleLinkedList::~DoubleLinkedList()
{
}

void DoubleLinkedList::removeAll()
{
	Node* ptemp = phead;
	while (phead != NULL)
	{
		ptemp = phead;
		phead = phead->next;
		delete phead;
	}
}

void DoubleLinkedList::printlist()
{
	Node *Temp = phead;
	while (Temp != NULL) {
		std::cout << Temp->value;
		Temp = Temp->next;
	}
}


int main() 
{
	DoubleLinkedList a;
	a.insert("1");
	a.insert("2");
	a.insert("3");
	a.remove("1");
	a.printlist();
	
	
	system("Pause");
	return 0;
}