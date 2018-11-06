#include <bits/stdc++.h>

using namespace std;

int n, f;
long double pi = 3.141592654;

int func(long double num, long double array[])
{
    int temp;
    if (num == 0)
    {
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        temp += (int)(array[i] / num);
    }
    if (temp >= f)
        return 1;
    return 0;
}
long double bs(long double array[])
{
    long double ini = 0, last = array[n - 1];
    while (last - ini >= 1e-6)
    {
        cout << ini << " " << last << endl;
        long double mid = (ini + last) / 2;
        if (func(mid, array))
        {
            ini = mid;
        }
        else
        {
            last = mid;
        }
    }
    return ini;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &n, &f);
        f++;
        int array[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &array[i]);
        }
        sort(array, array + n);

        long double array1[n];

        for (int i = 0; i < n; i++)
        {
            array1[i] = array[i] * array[i] * pi;
            printf("%.6Lf ", array1[i]);
        }
        long double dt = bs(array1);
        printf("%.6Lf\n", dt);
    }
    return 0;
}