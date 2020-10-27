#pragma once
#ifndef NOODLEREVIEW_H
#define NOODLEREVIEW_H

#include <string>
#include "LinkedList.h"
#include <iostream>

using namespace std;
class LinkedList;

class NoodleReview {

private:
	//variables
	int review;
	string brand;
	string variety;
	string style;
	string country;
	double stars;
	string ten;
public:
	//methods
	NoodleReview();
	NoodleReview(int rev, string br, string var, string sty, string cntr, double str, string ttn);
	int get_review_number();
	string get_brand();
	string get_variety();
	string get_style();
	string get_country();
	double get_stars();
	string get_top_ten();
	void display_noodle_reviews(LinkedList* link_nr);
	friend string assemble_noodle_review(NoodleReview &noodle_r);
};
#endif