#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>

#include "pics.h"

using std::cout;
using std::copy;
using std::endl;
using std::ostream_iterator;
using std::string;
using std::vector;

int main()
{
	vector<string> p, d;
	p.push_back("this is an");
	p.push_back("example");
	p.push_back("to");
	p.push_back("illustrate");
	p.push_back("framing");
	
	d.push_back("oh");
	d.push_back("hello");
	d.push_back("there");
	d.push_back("good");
	d.push_back("how");
	d.push_back("the");
	d.push_back("heck");
	d.push_back("are");
	d.push_back("you");

	ostream_iterator<string>ofile(cout, "\n");
	copy(p.begin(), p.end(), ofile);
	cout << endl;

	vector<string> f = frame(p);
	copy(f.begin(), f.end(), ofile);	cout << endl;

	vector<string> h = hcat(d, p);
	copy(h.begin(), h.end(), ofile);
	cout << endl;

	return 0;
}
