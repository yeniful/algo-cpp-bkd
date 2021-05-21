#include <bits/stdc++.h>
using namespace std;

long A, B, C, res;
string s;
vector<int> v1(10, 0);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> A >> B >> C;
    res = A * B * C;
    s = to_string(res);

    for (char e : s)
        v1[e - '0'] += 1;
    for (int i = 0; i < 10; i++)
        cout << v1[i] << '\n';
}
