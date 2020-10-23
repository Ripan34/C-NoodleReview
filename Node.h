#pragma once
/*
* Node class for NoodleReview
*/
#include "NoodleReview.h"

class Node
{
private:
	NoodleReview data;
	Node* next;
public:
	void set_next_node(Node* new_node);
	Node* get_next_node();
	void set_data(NoodleReview* nr);
	NoodleReview* get_data();
};