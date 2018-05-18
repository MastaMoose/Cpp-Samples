#include <ios>
#include <iostream>
#include <string>
#include <iomanip>

using std::cout;
using std::endl;
using std::string;
using std::setw;
using std::streamsize; 

int main()
{
	
	string::size_type size = cout.width();

	//cout << size << endl;
	//size = cout.width(4);
	for (int i = 0; i != 10; ++i)
	{
		cout << i << endl;
		cout << setw(i) << "a" << endl;
	}
		
	// << setw(1) << "hello there";
	streamsize num_len;
	cout << "klerjekjklerj" << endl;
	num_len = cout.width();
	cout << num_len << endl;

	return 0;
}

