#pragma once
#include <iostream>
#include "FileIO.h"
#include "NoodleReview.h"
using namespace std;


class IoRunner : public FileIO {
public:
	//constructor
	IoRunner()
	{
		cout << "FileIO class object has started." << endl;
	}
	vector<NoodleReview> read_from_file(string file_name);
	int write_to_file(string file_name, vector<NoodleReview> input_data);
};
