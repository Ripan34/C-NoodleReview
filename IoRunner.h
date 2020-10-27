#pragma once
#ifndef IORUNNER_H
#define IORUNNER_H

#include <iostream>
#include "FileIO.h"
//#include "LinkedList.h"
using namespace std;


class IoRunner : public FileIO {
public:
	//constructor
	IoRunner()
	{
		cout << "FileIO class object has started." << endl;
	}
	LinkedList* read_from_file(string file_name);
	int write_to_file(string file_name, LinkedList *input_data);
};
#endif