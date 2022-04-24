/***
 * Problem:
 * Link:
 * Pattern:
 **/

#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
	stack<char> st;
	if (s.length() == 1)
		return false;

	for (auto ch : s)
	{
		if (st.empty())
			st.push(ch);
		if (ch == ')' && st.top() == '(')
			st.pop();
		else if (ch == '}' && st.top() == '{')
			st.pop();
		else if (ch == ']' && st.top() == '[')
			st.pop();
		else
			st.push(ch);
	}

	return st.empty();
}

int main()
{
	string input;
	cout << "Enter String: ";
	cin >> input;

	if (isValid(input))
		cout << "ACCEPTED";
	else
		cout << "REJECTED";
}