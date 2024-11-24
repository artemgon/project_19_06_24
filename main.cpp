#include "funcs.h"

int main()
{
	string s;
	cout << "Please, enter a string" << endl;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ')
		{
			s[i] = '\t';
		}
	}
	cout << s << endl;
	return 0;
}