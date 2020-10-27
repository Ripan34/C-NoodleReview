#ifndef IORUNNER_CPP
#define IORUNNER_CPP

#include <iostream>
#include <fstream>
#include <sstream>
#include "IoRunner.h"
#include <vector>
using namespace std;

LinkedList* IoRunner::read_from_file(string file_name)
{
	string line;
	LinkedList *return_link = new LinkedList();
	ifstream myfile(file_name);
	if (myfile.is_open())
	{
		getline(myfile, line);
		while (getline(myfile, line))
		{
			string comma_tkn(",");
			size_t found = line.find(comma_tkn);
			if (found != string::npos)
			{
				stringstream s_str(line);
				vector<string> data;
				while (s_str.good())
				{
					string holder;
					getline(s_str, holder, ',');
					data.push_back(holder);
				}
				int rev = 0; string brn; string var; string sty; string cntr; double strs = 0.0; string ttn;
				if (data.size() == 8) {
					rev = stoi(data.at(0));
					brn = data.at(1);
					var = data.at(2) + "," + data.at(3);
					sty = data.at(4);
					cntr = data.at(5);
					strs = stod(data.at(6));
					ttn = data.at(7);
					continue;
				}

				for (size_t i = 0; i < data.size(); i++)
				{
					if (data.at(i).compare("Unrated") == 0)
						continue;
					switch (i)
					{
					case 0:
						rev = stoi(data.at(i));
						break;
					case 1:
						brn = data.at(i);
						break;
					case 2:
						var = data.at(i);
						break;
					case 3:
						sty = data.at(i);
						break;
					case 4:
						cntr = data.at(i);
						break;
					case 5:
						strs = stod(data.at(i));
						break;
					case 6:
						ttn = data.at(i);
						break;
					default:
						break;
					}
				}
				data.clear();
				NoodleReview *r = new NoodleReview(rev, brn, var, sty, cntr, strs, ttn);
				return_link->add_data(r);

			}
		}
	}
	else
		cout << "error opening the file" << endl;
	return return_link;

}
int IoRunner::write_to_file(string file_name, LinkedList *input_data)
{
	ofstream myfile(file_name);
	size_t size = input_data->getSize();
	if (myfile.is_open())
	{
		for (size_t i = 0; i < size; i++)
		{
			NoodleReview* noodle_r = input_data->get(i);
			string writeStr(to_string(noodle_r->get_review_number()) + " " + noodle_r->get_brand() + " " + noodle_r->get_variety() + " " + noodle_r->get_style()
				+ " " + noodle_r->get_country() + " " + to_string(noodle_r->get_stars()) + " " + noodle_r->get_top_ten() + "\n");
			myfile << writeStr;
		}
		myfile.close();
		return 0;
	}
	else
		return 1;
}
#endif