#include <iostream>
#include <string>
#include <typeinfo>

using std::cout;
using std::cin;
using std::endl;

template <typename T>
T multi(T a, T b)
{
	return (a*b);
}

int main()
{
	double x, y, c;

	cout << "Let multiply numbers!!!" << endl;
	cout << "Let see what number we can can get by multiplying two numbers." << endl;
	cout << "Please input your first number." << endl;
	cin >> x;
	cout << "Please input your second number." << endl;
	cin >> y;
	c = multi(x, y);
	cout << "The number we got from mutiplying " << x << " and " << y << " is " << c;
}
