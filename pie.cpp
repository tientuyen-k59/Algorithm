#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int testcase;
int N, F;
int r[10000];
double pi = 3.1415;

int f(double S)
{
    int cnt = 0;
    for (int i = 1; i <= N; i++)
    {
        cnt += floor((pi * i * i) / S);
    }
    return cnt >= F + 1;
}

int main()
{
    cin >> testcase;
    for (int i = 0; i < testcase; i++)
    {
        cin >> N >> F;
        for (int j = 0; j < N; j++)
        {
            cin >> r[j];
        }
        for (int k = 0; k < 100; k++)
        {
            
        }
    }
}