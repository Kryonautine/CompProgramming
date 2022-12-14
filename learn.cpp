#include <iostream> // <bits/stdc++.h>
using namespace std;

int main()
{
	int n = 5;
	float num_point = 2.99;
	const char one_letter = 'D';
	string sentence, inputstr, this_is_new = "OKay then"; // Not basic type, part of namespace std
	bool t_f = true;

	std::cout << "using std functions OK" << endl;
	cout << " WHoops";
	cout << "ZAmnn \t \\ \" \n"; // How to comment

	/*
	\t,\\,\",\n are all escape characters
	Multiline comments
	*/

	this_is_new[1] = 'k';

	int num1, num2, num3;
	num1 = num2 = num3 = 7;

	cout << "Enter a sentence:\n";
	getline (cin, sentence); // Be careful with \n for this function
	cout << "Enter num :";
	cin >> n;
	cout << endl << max(n, num1);
	cout << "Enter string :";
	cin >> inputstr;
	cout << endl
			 << "num1,2,3 " << num1 << " " << num2 << " " << num3
			 << endl << n << endl << this_is_new + " " + inputstr << endl 
			 << endl << this_is_new.append(inputstr) << endl
			 << endl << endl << "Sentence :" << sentence << endl
			 << "The size of this_is_new is " << this_is_new.length() << "\n"
			 << "Hello World!\n" << endl;
	return 0;
}


/*
// For math-related stuff
#include <cmath>

cout << sqrt(64);
cout << round(2.6);
cout << log(2);
*/