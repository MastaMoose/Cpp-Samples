#include <iostream>
#include<iomanip>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::setw;
using std::streamsize;

int main()
{
	int m = 101;
	for (int i = 0; i != m; i++)
	{

		cout << i << setw(4) << i*i << endl;

	}

	for (int i = 0; i != m; i++)
	{

		cout << setw(4) << i*i << endl;

	}

	cout << 7 % 2 << endl;
	cout << 4 % 2 << endl;
	cout << int(7/2) << endl;
	return 0;
}