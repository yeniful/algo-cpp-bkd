#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n + i; j++) {
            if (n - i - 1 <= j && j <= n + i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }

    return 0;
}

