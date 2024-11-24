#include "funcs.h"

int main()
{
	string s;
	int n;
	cout << "Please, enter a string" << endl;
	getline(cin, s);
	cout << "Enter ASCII number for symbol(34-255):" << endl;
	do
	{
		cin >> n;
		cout << endl;
	} while (n > 255 || n < 34);
	char symbol = char(n);
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == symbol) {
			s.erase(i, 1);
			i--; 
		}
	}
	cout << "The result is " << s << endl;
	return 0;
}