#include "funcs.h"

int main()
{
	string s;
	bool condition = true;
	cout << "Enter a string (size must be even):" << endl;
	do
	{
		getline(cin, s);
		cout << endl;
	} while (s.size() % 2 != 0);
	for (int i = 0, j = s.size() - 1; i < s.size() / 2 && j > s.size()/2; i++, j--)
	{
		if(s.at(i) != s.at(j) && tolower(s.at(i)) != tolower(s.at(j)))
		{ 
			condition = false;
			break;
		}
	}
	cout << "The condition is " << bool(condition) << endl;
	return 0;
}