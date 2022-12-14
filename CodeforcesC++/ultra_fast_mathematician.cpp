// Codeforces Round #200 (Div. 2) :: Problem A

#include <iostream>
#include <string>
using namespace std;

int main() {

	string num1;
	string num2;
	cin >> num1 >> num2;
	string answer = "";

	for (auto i = num1.begin(), j = num2.begin(); i < num1.end(); i++, j++) {
		if (*i == *j) {answer.append("0");}
		else {answer.append("1");}
	}

	cout << answer;
}