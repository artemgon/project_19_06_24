#include "funcs.h"

int main()
{
	string s;
	char symbol;
	cout << "Please, enter a string" << endl;
	getline(cin, s);
	cout << "Please, enter a symbol:" << endl;
	cin >> symbol;
	size_t i = s.find(symbol);
	while (i != string::npos)
	{
		s.erase(i, 1);
		i = s.find(symbol);
	}
	cout << "The result is " << s << endl;
	return 0;
}