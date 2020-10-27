#pragma once
/*
* Node class for NoodleReview
*/
#ifndef NODE_H
#define NODE_H

#include "NoodleReview.h"
class NoodleReview;
class Node
{
private:
	NoodleReview *data;
	Node* next;
public:
	Node();
	void set_next_node(Node* new_node);
	Node* get_next_node();
	void set_data(NoodleReview* nr);
	NoodleReview* get_data();
};
#endif