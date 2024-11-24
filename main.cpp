#include "funcs.h"

int main()
{
	string s;
	cout << "Please, enter a string:" << endl;
	getline(cin, s);
	int i_counter = 0, c_counter = 0, o_counter = 0;
	for (char& c : s) {
		if (int(c) < 58 && int(c) > 47)
			i_counter++;
		else if ((int(c) > 64 && int(c) < 91) || (int(c) > 96 && int(c) < 123))
			c_counter++;
		else
			o_counter++;
	}
	cout << "Digits: " << i_counter << endl;
	cout << "Characters: " << c_counter << endl;
	cout << "Other symbols: " << o_counter << endl;
	return 0;
}