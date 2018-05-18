#include <algorithm>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::max;
using std::vector;
using std::string;

struct Student_info{
	string name;
	double midterm, final;
	vector<double> homework;
};


int main()
{
	Student_info John, Jane;
	vector<Student_info> students; 
	typedef vector<Student_info>::size_type vec_sz;
	vec_sz size;
	John.name = "John";
	Jane.name = "Janeeeee";

	students.push_back(John);
	students.push_back(Jane);
	size = students.size();

	cout << "there are " << sinl << " students" << endl; 
	string::size_type maxlen = 0;
	for (vector<Student_info>::size_type i = 0; i != size ; ++i)
	{
		cout << "the name is " << students[i].name << endl;
		maxlen = max(students[i].name.size(), maxlen);
		
	}
	
	cout << maxlen << endl;
	
	/*Student_info */
	return 0;
}


