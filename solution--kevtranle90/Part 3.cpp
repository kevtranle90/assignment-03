/* ----------------------------------------------------------------------------
 * Copyright &copy; 2016 YOUR_NAME <kevintran323@csu.fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <typeinfo>
#include <set>

using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::endl;
using std::set;
using std::map;


string encourage1(string a)
{
	vector<string> v = { "You", "are", "Amazing," };
	v.push_back(a);

	for (string e : v)
	{
		cout << e << " ";
	}
	cout << endl;
	exit(0);
}
string encourage2(string a)
{
	vector<string> v = { "Do", "your", "Best," };
	v.push_back(a);

	for (string e : v)
	{
		cout << e << " ";
	}
	cout << endl;
	exit(0);
}
string encourage3(string a)
{
	vector<string> v = { "Just", "do", "it," };
	v.push_back(a);

	for (string e : v)
	{
		cout << e << " ";
	}
	cout << endl;
	exit(0);
}
string encourage4(string a)
{
	vector<string> v = { "I", "know", "can", "make", "it," };
	v.push_back(a);
	for (string e : v)
	{
		cout << e << " ";
	}
	cout << endl;
	exit(0);
}

int main()
{
	string you;
	int num;
	cout << "Hello this is the encourage machine, whats your name?"<<endl;
	cin >> you;
	cout << "Also choose a number between 1 and 4" << endl;
	cin >> num;

	while ((num < 1) || (num>4))
	{
		cout << "Please choose a number between 1 to 4";
		cin >> num;
	}

	switch (num)
	{
	case 1: encourage1(you);
			break;
	case 2: encourage2(you);
			break;
	case 3: encourage3(you);
			break;
	case 4: encourage4(you);
			break;
	// set
	cout << "We can be able to sort numbers in order with these given numbers"<< endl;
	cout << "We use a set of numbers {45, 67, 34, 98, 34, 62, 12, 1} " << endl;
	cout << "It would soon be organize from smallest to largest " << endl;
	set<int> s = { 45, 67, 34, 98, 34, 62, 12, 1 };
	for (int e : s)
	{
		cout << e << " " ;
	}
	cout << endl;
}
	




