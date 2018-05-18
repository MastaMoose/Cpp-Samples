#include <algorithm>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include <iomanip>

using std::string;
using std::endl;
using std::cout;
using std::setw;
using std::streamsize;

int num_length(int);

int main()
{
	int m = 100;
	for (int i = 0; i != (m+1); ++i)
	{
		
		cout << i << setw(5+num_length(i)) << i*i << endl;
	}
	return 0;
}

int num_length(int num)
{
	int j = 0, n = num ;
	while( n !=0)
	{
		n = n/10;
		++j;
	}
	return j;
}