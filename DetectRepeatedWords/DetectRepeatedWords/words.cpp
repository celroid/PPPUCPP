#include "../../../../std_lib_facilities.h"

int main()
{
	string previous = "";
	string current;
	while (cin >> current) {
		if (previous == current)
			cout << "repeated word: " << current << '\n';
		previous = current;
	}

	/*Test it with the sentence
She she laughed He He He because what he did did not look very very good
good . 
How many repeated words were there?  
	4
	He He did very
Why? What is the definition of word used here? 
	A word is any string of characters separated by whitespace.
What is the definition of repeated word? (For example, is She she a repetition?)
	A repeated word is a word that is identical to the previous word, She she is not a repetition because the lowercase letter s is different from the uppercase letter S, so the words are not identical.
*/
}