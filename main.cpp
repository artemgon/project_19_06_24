#include "funcs.h"

int main()
{
	int counter = 0;
	string s, word;
	cout << "Please, enter a string" << endl;
	getline(cin, s);
	stringstream ss(s);
	while (ss >> word)
	{
		counter++;
	}
	cout << "Quantity of words: " << counter << endl;
	return 0;
}