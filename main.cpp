#include "funcs.h"

int main()
{
	string s, symbol;
	int pos;
	cout << "Please, enter a string:" << endl;
	getline(cin, s);
	cout << "Please, enter a symbol:" << endl;
	getline(cin, symbol);
	cout << "Please, enter a position:" << endl;
	while (true) {
		cin >> pos;
		if (pos >= 0 && pos <= s.size())
			break;
	}
	s.insert(pos, symbol);
	cout << "The result is " << s << endl;
	return 0;
}