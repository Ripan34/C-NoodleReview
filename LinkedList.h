#pragma once
/*
* Linked List class
*/
#include "Node.h"

class LinkedList
{
private:
	Node* head; //head of the linked list
public:
	LinkedList(); //constructor
	void set_head(Node *h);
	Node* get_head();
	bool isEmpty();
	void add_data(NoodleReview* nr);
};
