// DAP to accept strings with WCWR

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    stack<int> temp;
    char c;
    int i = 0;
    cout << "Enter a string: ";
    cin >> a;
    int ones = 0, zeroes = 0;
    // cout << a.length() / 2 << endl;
    for (i = 0; i < a.length() / 2; i++)
    {
        if (a[i] == '1')
            temp.push(a[i]);
        else if (a[i] == '0')
            temp.push(a[i]);
    }
    c = a[++i];
    for (i = (a.length() / 2) + 1; i < a.length(); i++)
    {
        if (a[i] == temp.top())
            temp.pop();
    }
    if (temp.empty())
        cout << "Machine will accept this string.";
    else
        cout << "Machine will not accept this string.";
}