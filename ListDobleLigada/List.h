#pragma once
#include <iostream>
#include <string>
typedef struct Node
{
	std::string value;
	Node * next = NULL;
	Node * prev = NULL;
}   Node;

class DoubleLinkedList
{
private:
	
public:
	void insert(const std::string &v);
	void remove(const std::string &v);
	DoubleLinkedList();
	~DoubleLinkedList();
	void removeAll();
	void printlist();
};