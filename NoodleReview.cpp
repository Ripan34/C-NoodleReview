//NoodleReview implementation class

#include "NoodleReview.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void NoodleReview::display_noodle_reviews(vector<NoodleReview> vec_nr)
{
	for (NoodleReview e : vec_nr)
	{
		cout << assemble_noodle_review(e) << "hii" << endl;
	}
}
string assemble_noodle_review(NoodleReview& noodle_r)
{
	return to_string(noodle_r.review) + " " + noodle_r.brand + " " + noodle_r.variety + " " + noodle_r.style
		+ " " + noodle_r.country + " " + to_string(noodle_r.stars) + " " + noodle_r.ten;
}
//constructor 1
NoodleReview::NoodleReview()
{}
//constructor 2
NoodleReview::NoodleReview(int rev, string br, string var, string sty, string cntr, double str, string ttn)
{
	this->review = rev;
	this->brand = br;
	this->variety = var;
	this->style = sty;
	this->country = cntr;
	this->stars = str;
	this->ten = ttn;
}
int NoodleReview::get_review_number()
{
	return NoodleReview::review;
}
string NoodleReview::get_brand()
{
	return NoodleReview::brand;
}
string NoodleReview::get_variety()
{
	return NoodleReview::variety;
}
string NoodleReview::get_style()
{
	return NoodleReview::style;
}
string NoodleReview::get_country()
{
	return NoodleReview::country;
}
double NoodleReview::get_stars()
{
	return NoodleReview::stars;
}
string NoodleReview::get_top_ten()
{
	return NoodleReview::ten;
}