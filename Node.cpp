/*
* Node class implementation
*/
#ifndef NODE_CPP
#define NODE_CPP
#include "Node.h"

Node::Node()
{
	data = nullptr;
	next = nullptr;
}
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
	data = nr;
}
NoodleReview* Node::get_data()
{
	return data;
}
#endif