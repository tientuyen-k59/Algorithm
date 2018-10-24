#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int c[22][22], n, x[22], best = 2e9;
int mark[22];
void duyet(int i, int sum)
{
    if (i == n + 1)
    {
        if (sum + c[x[n]][1] < best)
            best = sum + c[x[n]][1];
        return;
    }
    for (int j = 2; j <= n; ++j)
        if (!mark[j])
        {
            if (sum + c[x[i - 1]][j] < best)
            {   
                mark[j] = 1;
                x[i] = j;
                duyet(i + 1, sum + c[x[i - 1]][j]);
                mark[j] = 0;
            }
        }
}
main()
{
    cin >> n;
    int m;
    cin >> m;
    memset(c, n, sizeof(c));
    while (m--)
    {
        int u, v, k;
        cin >> u >> v >> k;
        c[u][v] = k;
    }
    x[1] = 1;
    duyet(1, 0);
    cout << best;
}