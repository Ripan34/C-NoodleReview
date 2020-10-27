/*
Linked List implementation file
*/
#ifndef LINKEDLIST_CPP
#define LINKEDLIST_CPP
#include "LinkedList.h"

LinkedList::LinkedList()
{
	head = nullptr;
}
void LinkedList::set_head(Node *h)
{
	head = h;
}
Node* LinkedList::get_head()
{
	return head;
}
bool LinkedList::isEmpty()
{
	return head == nullptr;
}
void LinkedList::add_data(NoodleReview *nr)
{
	if (this->isEmpty())
	{
		head = new Node();
		head->set_data(nr);
	}
	else
	{
		Node* temp = this->head;
		while (temp != nullptr)
		{
			if (temp->get_next_node() == nullptr)
			{
				Node* newNode = new Node();
				newNode->set_data(nr);
				newNode->set_next_node(nullptr);
				temp->set_next_node(newNode);
				break;
			}
			temp = temp->get_next_node();
		}
	}
}
/*
/get items by index
*/
NoodleReview* LinkedList::get(int index)
{
	Node* temp = this->head;
	for (int i = 0; i < index; i++)
	{
		temp = temp->get_next_node();
	}
	return temp->get_data();
}
/*
/get size of the linked list
*/ 
int LinkedList::getSize()
{
	Node* temp = this->head;
	int size = 0;
	while (temp != nullptr)
	{
		size++;
		temp = temp->get_next_node();
	}
	return size;
}
#endif