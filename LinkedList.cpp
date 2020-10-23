/*
Linked List implementation file
*/
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

}