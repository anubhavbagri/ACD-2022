// DAP to accept strings with equal number of 1s and 0s

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cout << "Enter a string: ";
    cin >> a;
    int ones = 0, zeroes = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == '1')
            ones++;
        else if (a[i] == '0')
            zeroes++;
        else
        {
            cout << "Not a binary string.";
            return 0;
        }
    }
    if (ones == zeroes)
        cout << "Machine will accept this string.";
    else
        cout << "Machine will not accept this string.";
}