#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 3; i++) {
        int temp = 0, total = 0;
        for (int j = 0; j < 4; j++) {
            cin >> temp;
            total += temp;
        }
        if (total == 0) cout << 'D';
        else if (total == 1) cout << 'C';
        else if (total == 2) cout << 'B';
        else if (total == 3) cout << 'A';
        else if (total == 4) cout << 'E';
        cout <<'\n';
    }

    return 0;
}
