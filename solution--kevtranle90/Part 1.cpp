/* ----------------------------------------------------------------------------
 * Copyright &copy; 2016 YOUR_NAME <kevintran323@csu.fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */
#include <iostream>
#include <exception>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int num;
char next;

void room(int s);

int main()
{
	cout << "Choose one out of the five choices you like to pick"<< endl;
	cin >> num;
	while ((num < 1) || (num>5))
	{
		cout << "Please choose a number between 1 to 5";
		cin >> num;
	}

	try
	{
		room(num);
	}

	catch (const char * prize)
	{
		cout << "You won " << prize << "!\n";
	}

}

void room(int num)
{
	switch (num)
	{
	case 1: throw "money";
			break;
	case 2: throw "a luxary stay in a five star hotel";
			break;
	case 3:throw "nothing";
			break;
	case 4:throw "a new car";
			break;
	case 5:throw "a seven day cruise";
			break;
	}
}