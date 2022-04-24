/***
 * Problem: Design a PDA to accept WCWR where w is any string and WR is reverse of that string and C is a Special symbol
 **/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	stack<char> st;

	string input;
	cout << "Enter String: ";
	cin >> input;

	bool flag = false;

	for (auto c : input)
	{
		// let special symbols be ASCII characters 33 to 47
		if (c >= char(33) && c <= char(47))
		{
			flag = true;
			continue;
		}

		if (!flag)
		{
			st.push(c);
		}

		else if (flag)
		{
			if (c != st.top())
				break;
			st.pop();
		}
	}

	if (st.empty())
		cout << "ACCEPTED";
	else
		cout << "REJECTED";
}