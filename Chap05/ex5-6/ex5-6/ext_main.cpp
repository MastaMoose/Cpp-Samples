#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <time.h>

#include "Student_info.h"
#include "grade.h"

//driver program for grade partitioning examples

using std::cin;
using std::cout;
using std::endl;
using std::sort;
using std::string;
using std::vector;

using std::max;

vector<Student_info> extract_fails(vector<Student_info>& v);
vector<Student_info> extract_fails_mod(vector<Student_info>& v);
vector<Student_info> inputs();
void outputs(const vector<Student_info>& v, const vector<Student_info>& s);

int main()
{
	vector<Student_info> constant_vs, vs1, vs2;
	
	constant_vs = inputs();

	vs1 = constant_vs;
	vs2 = constant_vs;

	clock_t start = clock();
	vector<Student_info> fails1 = extract_fails(vs1);
	clock_t end = clock();
	float time = (float)(end - start) / CLOCKS_PER_SEC;
	cout << "*********************run time was " << time << " original code ****************" << endl;

	outputs(fails1, vs1);

	start = clock();
	vector<Student_info> fails2 = extract_fails_mod(vs2);
	end = clock();
	time = (float)(end - start) / CLOCKS_PER_SEC;
	cout << "*********************run time was " << time << " for modified code****************" << endl;

	outputs(fails2, vs2);

	return 0;
}

vector<Student_info> inputs()
{
	//cout << "beginning of input " << endl;
	vector<Student_info> vs;
	Student_info s;
	string::size_type maxlen = 0;
	while (read(cin, s)) {
		maxlen = max(maxlen, s.name.size());
		vs.push_back(s);
	}

	sort(vs.begin(), vs.end(), compare);
	cout << endl
		<< endl;
	//cout << "end of input " << endl;
	return vs;
}

void outputs(const vector<Student_info>& fails, const vector<Student_info>& students)
{
	//cout << "beginning of output" << endl;
	cout << string(10, '*') + "These are the failed students" + string(10, '*') << endl;
	for (int i = 0; i < fails.size(); ++i)
		cout << fails[i].name << " " << grade(fails[i]) << endl;

	cout << string(10, '*') + "These are the passed students" + string(10, '*') << endl;
	for (int j = 0; j < students.size(); ++j)
		cout << students[j].name << " " << grade(fails[j]) << endl;
	cout << endl << endl;
	//cout << "end of outputs" << endl;
}