#include <bits/stdc++.h>
using namespace std;

int arr[5];
int avg = 0;
int sum = 0;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 5; i++) {
            cin >> arr[i];
            sum += arr[i];
    }

    sort(arr, arr + 5);
    avg = arr[2];

    cout << sum / 5 << '\n' << avg;

    return 0;
}
