#pragma once
#pragma once
#include <vector>
#include <string>
#include "NoodleReview.h"
using namespace std;

class FileIO {
public:
	virtual vector<NoodleReview> read_from_file(string file_name) = 0;
	virtual int write_to_file(string file_name, vector<NoodleReview> input_data) = 0;
};