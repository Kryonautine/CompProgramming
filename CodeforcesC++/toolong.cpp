// Codeforces Beta Round #65 (Div 2) :: Problem A

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int numwords;
	cin >> numwords;

	for (int i=0;i<numwords;i++) {

		string str, outputstr;
		cin >> str;

		if (str.length() > 10)
		{
			string lenstr = to_string(str.length() - 2);				 // Converts int to string. Should i make this function?
			outputstr = str[0] + lenstr + str[str.length() - 1]; // First Char + number of letters in between + Last char.
		}
		else
		{
			outputstr = str;
		}

		cout << outputstr << endl;
	}
}