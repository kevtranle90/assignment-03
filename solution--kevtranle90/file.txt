/* ----------------------------------------------------------------------------
 * Copyright &copy; 2016 YOUR_NAME <kevintran323@csu.fullerton.edu>
 * Released under the [MIT License] (http://opensource.org/licenses/MIT)
 * ------------------------------------------------------------------------- */
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// ---------------------------  recursive --------------------------------------- 
//int gcd(int a, int b)
//{
//	if (a < 0)
//	{
//		a = abs(a);
//	}
//	if (b < 0)
//	{
//		b = abs(b);
//	}
//	if (b == 0)
//	{
//		return abs(a);
//	}
//	if (a == 0)
//	{
//		return abs(b);
//	}
//	if (a > b)
//	{
//		return gcd(a - b, b);
//	}
//	if (b > a)
//	{
//		return gcd(a, b - a);
//	}
//}
//
//int main()
//{
//	int x, y;
//	cout << "Let find the greatest common denominator of two number" << endl;
//	cout << "Please in put two number." << endl;
//	cout << " Enter the first number" << endl;
//	cin >> x;
//	cout << " Enter the second number" << endl;
//	cin >> y;
//	cout << " The greatest common denominator of " << x << " and " << y << " is " << gcd(x, y) << endl;
//	return 0;
//}
//
//int fib(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	if (n == 2)
//	{
//		return 1;
//	}
//
//	return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//	int x;
//	cout << "Let find Fibonacci number" << endl;
//	cout << "Please in put a number" << endl;
//	cin >> x;
//	while (x < 1)
//	{
//		cout << "Invalid value!!! Please choose a number greater than 0.";
//		cin >> x;
//	}
//	cout << " The Fibonacci number of " << x << " is " << fib(x) << endl;
//	return 0;
//}
//
//int pow(int a, int b)
//{
//	if (b == 0)
//	{
//		return 1;
//	}
//	if (b == 1)
//	{
//		return a;
//	}
//	return a * pow(a, b - 1);
//}
//
//int main()
//{
//	int x, y;
//	cout << "Let find Power number value" << endl;
//	cout << "Please in put a base number" << endl;
//	cin >> x;
//	cout << "Please in put a exponent number" << endl;
//	cin >> y;
//	while (y < 1)
//	{
//		cout << "Invalid value!!! Please choose a number greater than 0.";
//		cin >> y;
//	}
//	cout << " The power number value of base of " << x << " and exponent of " << y << " is " << pow(x, y) << endl;
//	return 0;
//
//}
//
//int tri(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	return n + tri(n - 1);
//}
//
//int main()
//{
//	int x;
//	cout << "Let find Triangular numbers" << endl;
//	cout << "Please input a number" << endl;
//	cin >> x;
//	cout << " The Triangular number of " << x << " is " << tri(x) << endl;
//	return 0;
//}

//---------------------------  iterative  --------------------------------------- 

//int gcd_iter(int a, int b)
//{
//	if (a < 0)
//	{
//		a = abs(a);
//	}
//	if (b < 0)
//	{
//		b = abs(b);
//	}
//	if (b == 0)
//	{
//		return abs(a);
//	}
//	if (a == 0)
//	{
//		return abs(b);
//	}
//	if (a > b)
//	{
//		return gcd_iter(a - b, b);
//	}
//	if (b > a)
//	{
//		return gcd_iter(a, b - a);
//	}
//}
//
//int main()
//{
//	int x, y;
//	cout << "Let find the greatest common denominator of two number" << endl;
//	cout << "Please in put two number." << endl;
//	cout << " Enter the first number" << endl;
//	cin >> x;
//	cout << " Enter the second number" << endl;
//	cin >> y;
//	cout << " The greatest common denominator of " << x << " and " << y << " is " << gcd_iter(x, y) << endl;
//	return 0;
//}
//
//int fib_iter(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	if (n == 2)
//	{
//		return 1;
//	}
//
//	return fib_iter(n - 1) + fib_iter(n - 2);
//}
//
//int main()
//{
//	int x;
//	cout << "Let find Fibonacci number" << endl;
//	cout << "Please in put a number" << endl;
//	cin >> x;
//	while (x < 1)
//	{
//		cout << "Invalid value!!! Please choose a number greater than 0.";
//		cin >> x;
//	}
//	cout << " The Fibonacci number of " << x << " is " << fib_iter(x) << endl;
//	return 0;
//}
//
//int pow_iter(int a, int b)
//{
//	if (b == 0)
//	{
//		return 1;
//	}
//	if (b == 1)
//	{
//		return a;
//	}
//	return a * pow_iter(a, b - 1);
//}
//
//int main()
//{
//	int x, y;
//	cout << "Let find Power number value" << endl;
//	cout << "Please in put a base number" << endl;
//	cin >> x;
//	cout << "Please in put a exponent number" << endl;
//	cin >> y;
//	while (y < 1)
//	{
//		cout << "Invalid value!!! Please choose a number greater than 0.";
//		cin >> y;
//	}
//	cout << " The power number value of base of " << x << " and exponent of " << y << " is " << pow_iter(x, y) << endl;
//	return 0;
//
//}
//
//int tri_iter(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	return n + tri_iter(n - 1);
//}
//
//int main()
//{
//	int x;
//	cout << "Let find Triangular numbers" << endl;
//	cout << "Please input a number" << endl;
//	cin >> x;
//	cout << " The Triangular number of " << x << " is " << tri_iter(x) << endl;
//	return 0;
//}
