#include <bits/stdc++.h>
using namespace std;

int year;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> year;

    if (!(year % 4))
    {
        if ((year % 100) || !(year % 400))
            cout << true;
        else
            cout << false;
    }
    else
        cout << false;

    return 0;

}
