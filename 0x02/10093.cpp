#include <bits/stdc++.h>
using namespace std;

long long A, B;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> A >> B;

    if (A != B) {
        cout << max(A, B) - min(A, B) - 1 << '\n';

        for (long long i = min(A, B) + 1; i < max(A, B); i++) {
            cout << i << ' ';
        }
    }
    else
        cout << 0;
    return 0;
}
