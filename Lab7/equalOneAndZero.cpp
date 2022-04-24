/***
 * Problem: Design a program for creating a machine which accepts string having equal no. of 1’s and 0’s
 **/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cout << "Enter binary string: ";
	cin >> str;

	int oneCount = 0, zeroCount = 0;
	for (auto c : str)
	{
		if (c == '0')
			zeroCount++;
		else if (c == '1')
			oneCount++;
	}

	if (oneCount == zeroCount)
		cout << "ACCEPTED";
	else
		cout << "REJECTED";
}