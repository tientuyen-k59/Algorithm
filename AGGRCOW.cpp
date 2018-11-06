#include <bits/stdc++.h>
using namespace std;
int n, c;
int func(int num, int array[])
{
    int cows = 1, pos = array[0];
    for (int i = 1; i < n; i++)
    {
        if (array[i] - pos >= num)
        {
            pos = array[i];
            cows++;
            if (cows == c)
                return 1;
        }
    }
    return 0;
}
int bs(int array[])
{
    int ini = 0, last = array[n - 1], max = -1;
    while (last > ini)
    {
        //cout<<last<<" "<<ini<<endl;
        int mid = (ini + last) / 2;
        if (func(mid, array) == 1)
        {
            //cout<<mid<<endl;
            if (mid > max)
                max = mid;
            ini = mid + 1;
        }
        else
            last = mid;
    }
    return max;
}
int main()
{
    int t; // test case
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &n, &c);
        int array[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &array[i]);
        sort(array, array + n);
        //cout<<" dfsa \n";
        int k = bs(array);
        printf("%d\n", k);
    }
    return 0;
}

// #include <bits/stdc++.h>
// #include <iostream>
// #include <vector>

// using namespace std;

// int n, C;
// vector<int> x;
// int f(int S)
// {
//     int cnt = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         cnt += ((x[i] - x[i - 1]) >= S) ? 1 : 0;
//     }
//     return (cnt >= C - 1);
// }

// int main()
// {
//     cin >> n >> C;
//     x.resize(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> x[i];
//     }
//     sort(x.begin(), x.end());

//     int L = 1, R = 1000000000, ans = 0;
//     while (L <= R)
//     {
//         int M = (L + R) / 2;
//         if (f(M))
//         {
//             ans = M;
//             L = M + 1;
//         }
//         else
//             R = M - 1;
//     }
//     cout << ans;
// }