#include <bits/stdc++.h>
using namespace std;

int arr[7];
int sumOddnum = 0;
int minOddnum = 100;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 7; i++) {
            cin >> arr[i];
        if (arr [i] % 2) {
            if (arr[i] < minOddnum) {
                minOddnum = arr[i];
            }
            sumOddnum += arr[i];
        }
    }

    if(!sumOddnum)
        cout << "-1\n";
    else
        cout << sumOddnum << '\n' << minOddnum;

    return 0;
}
