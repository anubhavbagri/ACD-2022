// DAP to accept strings with well formed parenthesis.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    queue<char> temp;
    cout << "Enter a string: ";
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if (temp.empty())
            if (a[i] == ')')
            {
                cout << "Machine will not accept this string.";
                return 0;
            }
        if (a[i] == '(')
            temp.push('(');
        if (a[i] == ')')
            temp.pop();
    }
    if (temp.empty())
        cout << "Machine will accept this string.";
    else
        cout << "Machine will not accept this string.";
}