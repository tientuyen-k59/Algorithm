#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;

// int n, k1, k, k2, kmax = 10000000;
// int f[202][72];
/*
int dem(int i, int L)
{
    if (i == n)
        return L == 0 || L >= k1;
    if (f[i][L] != -1)
        return f[i][L];
    f[i][L] = 0;
    if (i == 0 || L >= k1)
        f[i][L] += dem(i + 1, 0);
    if (L < k2)
        f[i][L] += dem(i + 1, L + 1);
    if (f[i][L] > kmax)
        f[i][L] = kmax + 1;
    return f[i][L];
}

int X[202];
void timkiem(int i, int L)
{
    if (i == n)
    {
        if (L == 0 || L >= k1)
        {
            for (int i = 0; i < n; ++i)
                cout << X[i];
            exit(0);
        }
        return;
    }
    if (i == 0 || L >= k1)
    {
        if (k <= dem(i + 1, 0))
        {
            timkiem(i + 1, 0);
            return;
        }
        X[i] = 0;
        k -= dem(i + 1, 0);
    }
    if (L < k2)
    {
        X[i] = 1;
        timkiem(i + 1, L + 1);
    }
}
*/
int n, k1, k2, X[202];
void lietke(int i, int L)
{
    if (i == n)
    {
        if (L == 0 || L >= k1)
        {
            for (int i = 0; i < n; ++i)
                cout << X[i];
            cout << endl;
        }
        return;
    }
    X[i] = 0;
    if (i == 0 || L >= k1)
    {
        lietke(i + 1, 0);
    }
    X[i] = 1;
    if (L < k2)
    {
        lietke(i + 1, L + 1);
    }
}
int main()
{
    cin >> n;
    cin >> k1;
    cin >> k2;
    lietke(0, 0);
}