#include <bits/stdc++.h>
using namespace std;

int temp;
int arr[3];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> arr[0] >> arr[1] >> arr[2];

    sort(arr, arr+3);

    for(int i = 0; i < 3; i++)
    {
       cout << arr[i] << ' ';
    }

    return 0;

}
