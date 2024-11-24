#include "funcs.h"

int main()
{
	string s;
	char symbol;
	int counter = 0;
	cout << "Please, enter a string:" << endl;
	getline(cin, s);
	cout << "Please, enter a symbol:" << endl;
	cin >> symbol;
	for (char& c : s) {
		if (c == symbol)
			counter++;
	}
	cout << "Symbol " << symbol << " appears " << counter << " times in your sentence." << endl;
	return 0;
}