/**
 *	Design a PDA for the language L = {a^(2n) b^(2n+2)}
 */

#include <bits/stdc++.h>
using namespace std;
#define A 'a'
#define B 'b'

int main()
{
	stack<char> st;
	string input;

	cout << "Enter test string: ";
	getline(cin, input);
	int count_b = 0, i, count_a = 0;
	for (i = 0; i < input.length(); i++)
	{
		// push every other 'a' to the stack
		if (input[i] == A)
		{
			count_a++;
			if (count_a % 2 != 0)
			{
				cout << "pushed " << count_a << "th A" << endl;
				st.push(A);
			}
		}

		// when 'b' is encountered, change the states on the first and second 'b' and
		// then pop 'a' on every other b
		if (input[i] == B)
		{
			count_b++;
			cout << "Found " << count_b << "th B" << endl;
			if (count_b > 2)
			{
				if (!st.empty())
				{
					if (count_b % 2 == 0)
					{
						cout << "popped A for " << count_b << " b" << endl;
						st.pop();
					}
				}
				else
				{
					cout << "NO";
					exit(0);
				}
			}
		}
	}

	// when we have empty stack, return result
	if (st.empty() && i == input.length())
		cout << "YES";
	else
		cout << " NO";

	return 0;
}