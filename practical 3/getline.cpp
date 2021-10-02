#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;

	cout << "Please enter your name: \n";
	getline(cin, str);
	cout << str;
	return 0;
}
