#include <iostream>
#include <fstream>
#include <sstream>
#include "IoRunner.h"
#include <string>
using namespace std;

vector<NoodleReview> IoRunner::read_from_file(string file_name)
{
	string line;
	vector<NoodleReview> return_vec;
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

				for (int i = 0; i < data.size(); i++)
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
				return_vec.push_back(NoodleReview(rev, brn, var, sty, cntr, strs, ttn));
			}
		}
	}
	else
		cout << "error opening the file" << endl;

	return return_vec;

}
int IoRunner::write_to_file(string file_name, vector<NoodleReview> input_data)
{
	ofstream myfile(file_name);
	if (myfile.is_open())
	{
		myfile << "Writing this to a file." << endl;
		myfile << "Test writing" << endl;
		myfile.close();
		return 0;
	}
	else
		return 1;
}