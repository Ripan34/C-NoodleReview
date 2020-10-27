#pragma once
#pragma once
#ifndef FILEIO_H
#define FILEIO_H

#include "LinkedList.h"
#include <string>
using namespace std;

class FileIO {
public:
	virtual LinkedList* read_from_file(string file_name) = 0;
	virtual int write_to_file(string file_name, LinkedList *input_data) = 0;
};
#endif