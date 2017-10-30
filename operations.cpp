// simple program to exercise operators

//v2.0

#include "../../std_lib_facilities.h"

int main()

{

	int n;
	int a;
	cout << "Please enter an int value: \n";
	cin >> n;
	cout << "Please enter an int value: \n";
	cin >> a;
	cout << "n == " << n
		<< "\nn+1 == " << n + 1
		<< "\nthree times n == " << 3 * n
		<< "\ntwice n == " << n + n
		<< "\nn squared == " << n*n
		<< "\nhalf of n == " << n / 2
		<< "\nsquare root of n == " << sqrt(n)
		<< "((n/b) *a) + (n % a) == " << ((n / a) *a) + (n % a)
		<< '\n'; //another name for newline ("end of line") in output

	keep_window_open(); //enter a character to exit

}