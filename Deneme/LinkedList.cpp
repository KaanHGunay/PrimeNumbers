#include "LinkedList.h"
#include "Functions.h"

LinkedList::LinkedList() {
	Node* n = new Node(2);
	firstNode = n;
	lastNode = n;
}

LinkedList::LinkedList( int  x) {
	Node* n = new Node(x);
	firstNode = n;
	lastNode = n;
}

void LinkedList::add( int  x) {
	Node* n = new Node(x);
	lastNode->next = n;
	lastNode = lastNode->next;
}

void LinkedList::next_prime() {
	if (lastNode->x == 2) {
		add(3);
		return;
	}

	 int  x = lastNode->x + 2;

	while (!is_prime_until_nullptr(x, firstNode)) {
		x += 2;
	}

	add(x);
}

LinkedList::~LinkedList()
{
	Node* deletingNode;
	while (firstNode != lastNode) {
		deletingNode = firstNode;
		firstNode = firstNode->next;
		free(deletingNode);
	}
	
	free(lastNode);
}
