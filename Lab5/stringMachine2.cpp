#include <bits/stdc++.h>
using namespace std;

int main()
{
	string input;

	cout << "Enter binary string: ";
	cin >> input;

	int input_len = input.length();

	// check last 3 bits
	bool accepted = input[input_len - 1] == '1' && input[input_len - 2] == '0' && input[input_len - 3] == '1';

	if (accepted)
		cout << "ACCEPTED";
	else
		cout << "REJECTED";
}