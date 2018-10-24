#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int n;
int kq[22];
int mark[100];
void duyet(int l)
{
    if (l > n)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << kq[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int j = 1; j <= n; j++)
    {
        if (mark[j] == 0)
        {
            mark[j] = 1;
            kq[l] = j;
            duyet(l + 1);
            mark[j] = 0;
        }
    }
}
int main()
{
    cin >> n;
    duyet(1);
}

// #include <bits/stdc++.h>
// #include <iostream>

// using namespace std;

// // #include <iostream>
// // using namespace std;

// // int n, kq[11], dd[10];

// // void xuat()
// // {
// //     for (int j = 1; j <= n; j++)
// //         cout << kq[j] << " ";
// //     cout << endl;
// // }

// // void backtrack(int i)
// // {
// //     if (i > n)
// //         xuat();
// //     for (int j = 1; j <= n; j++)
// //     {
// //         cout << "j = " << j << ", dd[" << j << "]= "
// //              << dd[j] << ", kq[" << j << "] = " << kq[j] << endl;
// //         if (dd[j] == 0)
// //         {
// //             dd[j] = 1;
// //             kq[i] = j;
// //             backtrack(i + 1);
// //             dd[j] = 0;
// //         }
// //     }
// // }

// // int main()
// // {
// //     cin >> n;
// //     backtrack(1);
// // }

// int n;
// vector<int> x; // Luu hoan vi
// int i;
// int mark[10002];
// void duyethoanvi(int l)
// {
//     if (l == n)
//     {
//         for (int j = 0; j < n; ++j)
//             cout << x[j] << " ";
//         cout << endl;
//         return;
//     }
//     for (int j = 1; j <= n; ++j)
//         if (!mark[j])
//         {
//             x[l] = j;
//             mark[j] = 1;
//             duyethoanvi(l + 1);
//             mark[j] = 0;
//         }
// }

// int main()

// {
//     cin >> n;
//     x.resize(n);
//     duyethoanvi(0);
//     return 0;
// }