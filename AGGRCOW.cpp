#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int n, C;
vector<int> x;
int f(int S)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        cnt += ((x[i] - x[i - 1]) >= S) ? 1 : 0;
    }
    return (cnt >= C) ? 1 : 0;
}

int main()
{
    cin >> n >> C;
    x.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x.begin(), x.end());

    int L = 1, R = 1000000000, ans = 0;
    while (L <= R)
    {
        int M = (L + R) / 2;
        if (f(M))
        {
            ans = M;
            L = M + 1;
        }
        else
            R = M - 1;
    }
    cout << ans;
}