// Driver class
#include <iostream>
#include "IoRunner.h"
#include "NoodleReview.h"
using namespace std;

int main()
{
	cout << "hello\n";
	return 0;
	IoRunner my_runner;
	NoodleReview my_review;
	my_review.display_noodle_reviews(my_runner.read_from_file("ramen-ratings.csv"));

	cout << endl;


	//write to file test
	vector<NoodleReview> nVec; 	//for testing purpose

	if (my_runner.write_to_file("testFile.txt", nVec) == 0)
		cout << "Success writing to the file." << endl;
	else
		cout << "Failure!, can not write to file" << endl;
}