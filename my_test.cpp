// Driver class
#include <iostream>
#include "IoRunner.h"
#include "NoodleReview.h"

using namespace std;

int main()
{
	IoRunner my_runner;
	NoodleReview my_review;
	LinkedList* linkedList = my_runner.read_from_file("ramen-ratings.csv");
	my_review.display_noodle_reviews(linkedList);

	cout << endl;

	//write to file test

	if (my_runner.write_to_file("testFile.txt", linkedList) == 0)
		cout << "Success writing to the file." << endl;
	else
		cout << "Failure!, can not write to file" << endl;

	return 0;
}