#include <bits/stdc++.h>
using namespace std;

int N, X;
int arr[10001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> X;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        if (arr[i] < X)
            cout << arr[i] << " ";
    }


}
