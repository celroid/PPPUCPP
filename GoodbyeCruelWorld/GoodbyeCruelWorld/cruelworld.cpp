#include "../../../../std_lib_facilities.h"


/*


int Main()
{

STRING s = "Goodye, cruel world!";
cOut << S << '\n';

}

Compile the “Goodbye, cruel world!” program and examine the error messages. 
Did the compiler find all the errors? 
No, it didn't find that the function must have a return value until the other errors were corrected.
It sees Main as a different function from main, and only when all other errors are corrected did it give an error that suggests the main function might be missing.
Error	LNK1561	entry point must be defined	
What did it suggest as the problems?
It suggests that the variables are undefined and undeclared.
Did the compiler get confused and diagnose more than four errors?
Yes, it doesn't know that STRING is supposed to be a datatype and that cOut is supposed to be the standard output stream cout.
Remove the errors one by one, starting with the lexically first, and see how
the error messages change (and improve).
*/

int main()
{

	string s = "Goodye, cruel world!";
	cout << s << '\n';
	return 0;

}