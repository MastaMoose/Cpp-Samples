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

int main()
{
	int m = 101;
	for (int i = 0; i != m; i++)
	{

		cout << i << setw(8) << i*i << endl;	

	}
	return 0;
}