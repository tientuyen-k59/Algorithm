#include <bits/stdc++.h>
using namespace std;
int n,f; // n chiec banh, f+1 nguoi
long double pi=3.14159265358979323846264338327950;
int func(long double num,long double array[])
{
    int fr=0;
    if (num==0)
        return 0;
    for (int i=0; i<n; i++)
        fr+=(int)(array[i]/num);
    if (fr>=f)
        return 1;
    else
        return 0;
}
long double bs(long double array[])
{
    long double ini=0,last=array[n-1],max=0.0;
    while (last - ini >= 1e-6)
    {
        //printf("%.2Lf %.2Lf\n",ini,last);
        long double mid=(ini+last)/2;
        if (func(mid,array)==1)
        {
            /*if (max<mid)
                max=mid;*/
            ini=mid;
        }
        else
            last=mid;
    }
    return ini;
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d %d",&n,&f);
        f++;
        int array1[n];
        for (int i=0; i<n; i++)
            scanf("%d",&array1[i]);
        long double array[n];
        sort(array1,array1+n);
        for (int i=0; i<n; i++)
            array[i]=array1[i]*array1[i]*pi;
        /*for (int i=0; i<n; i++)
            printf("%Lf ",array[i]);
        cout<<endl;*/
        long double k=bs(array);
        printf("%.4Lf\n",k);
    }
    return 0;
}




















// #include <bits/stdc++.h>
// #include <iostream>

// using namespace std;
// int testcase;
// int N, F;
// int r[10000];
// double pi = 3.1415;

// int f(double S)
// {
//     int cnt = 0;
//     for (int i = 1; i <= N; i++)
//     {
//         cnt += floor((pi * i * i) / S);
//     }
//     return cnt >= F + 1;
// }

// int main()
// {
//     cin >> testcase;
//     for (int i = 0; i < testcase; i++)
//     {
//         cin >> N >> F;
//         for (int j = 0; j < N; j++)
//         {
//             cin >> r[j];
//         }
//         for (int k = 0; k < 100; k++)
//         {
            
//         }
//     }
// }