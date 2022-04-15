#include <bits/stdc++.h>
using namespace std;

int main()
{
	int input;
	cout << "Enter number: ";
	cin >> input;

	if (input % 2 == 0)
		cout << "Machine will accept this input.";
	else
		cout << "Machine will not accept this input";
	cout << endl;
}