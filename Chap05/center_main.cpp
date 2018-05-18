#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

#include "center.h"

using std::cout;
using std::copy;
using std::endl;
using std::ostream_iterator;
using std::string;
using std::vector;

int main()
{
	vector<string> p;
	p.push_back("this is an");
	p.push_back("example");
	p.push_back("to");
	p.push_back("illustrate");
	p.push_back("framing");

	ostream_iterator<string>ofile(cout, "\n");
	copy(p.begin(), p.end(), ofile);
	cout << endl;

	vector<string> f = center(p);
	copy(f.begin(), f.end(), ofile);	
	cout << endl;

	return 0;
}
