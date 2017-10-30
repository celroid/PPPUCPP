//this program reads the name and age from the keyboard and outputs them on the console

//v2.0

#include "../../std_lib_facilities.h"

int main() {
	cout << "Please enter your first name and age \n";
	string first_name; // string variable
	double age;
	cin >> first_name;
	cin >> age;
	cout << "Hello, " << first_name << " (age in months " << age *12 << ")\n";

	keep_window_open();
	return 0;
	
}