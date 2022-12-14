// Codeforces Round #197 (Div. 2) :: Problem A

#include <iostream>
#include <string>
using namespace std;

/*
Notes:
Learnt to put effort, Don't stop just because it's hard!
Also, common errors include comparing characters and integers.
/b is better solution than making "3" and "3+" as string may/may not have a 3.
*/

int main() {

	string s;
	cin >> s;
	int one = 0, two = 0, three = 0;

	for (auto iter = s.begin(); iter <= s.end();iter++) {
		/*
		cout << *iter;
		cout << "|" << one;
		cout << "|" << two;
		cout << "|" << one;
		cout << endl;
		*/
		if (*iter=='1') {
			one++;
			continue;
		}
		if (*iter=='2') {
			two++;
			continue;
		}
		if (*iter=='3') {
			three++;
			continue;
		}
	}
	//cout << one << "||" << two << "||" << three << endl;

	string output = "";
	for (int i=0; i<one; i++) {
		output.append("1+");
	}
	for (int i=0; i<two; i++) {
		output.append("2+");
	}
	for (int i=0; i<three; i++) {
		output.append("3+");
	}
	output.pop_back();

	cout << output;

}