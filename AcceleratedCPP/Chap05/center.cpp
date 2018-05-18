#include <algorithm>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::max;

string::size_type width(const vector<string>& v)
{
	string::size_type maxlen = 0;
	for(vector<string>::size_type i = 0; i != v.size(); ++i)
		maxlen = max(maxlen, v[i].size());
	return maxlen;
}

vector<string> center(const vector<string>& v)
{
	vector<string> ret;
	string::size_type maxlen = width(v);
	string border(maxlen + 2, '*');

	// write the top border
	ret.push_back(border);

	// write each interior row, bordered by an asterisk and a space
	for (vector<string>::size_type i = 0; i != v.size(); ++i) {

		string::size_type stdiff = maxlen - v[i].size();

		string padR = string(string::size_type(stdiff/2), ' ');
		string padL = string(stdiff - string::size_type(stdiff/2), ' ');
		ret.push_back("*" + padR + v[i]  + padL + "*");
		
	}

	// write the bottom border
	ret.push_back(border);
	return ret;
}
