#pragma once
#include "Node.h"

class LinkedList
{
public:
	Node* firstNode;
	Node* lastNode;

	LinkedList();
	LinkedList( int);
	void add( int);
	void next_prime();
	~LinkedList();
};
