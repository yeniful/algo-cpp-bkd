#include <bits/stdc++.h>
using namespace std;

int arr[9];
int maxValue;
int maxIndex;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 9; i++) {
            cin >> arr[i];
        if (arr[i] > maxValue) {
            maxValue = arr[i];
            maxIndex = i;
        }
    }

    cout << maxValue << '\n' << maxIndex + 1;

    return 0;
}
