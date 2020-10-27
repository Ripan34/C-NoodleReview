#pragma once
/*
* Linked List class
*/
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class NoodleReview;
class Node;
class LinkedList
{
private:
	Node *head; //head of the linked list
public:
	LinkedList(); //constructor
	void set_head(Node *h);
	Node* get_head();
	bool isEmpty();
	void add_data(NoodleReview *nr);
	NoodleReview* get(int index);
	int getSize();
};
#endif