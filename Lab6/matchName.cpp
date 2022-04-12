#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter name: ";
    cin >> str;

    regex exp("(Mr|Ms)(.*)");

    if (regex_match(str, exp))
        cout << "Machine will accept this name.";
    else
        cout << "Machine will not accept this name.";
    cout << endl;
}