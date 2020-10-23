/*
* Node class implementation
*/
#include "Node.h"

void Node::set_next_node(Node* new_node)
{
	next = new_node;
}
Node* Node::get_next_node()
{
	return next;
}
void Node::set_data(NoodleReview* nr)
{
	data = *nr;
}
NoodleReview* Node::get_data()
{
	return &data;
}