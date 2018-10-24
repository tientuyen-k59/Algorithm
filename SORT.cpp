// #include <time.h>
// // #include <cstdlib>
// #include <stdio.h>
// #include <stdlib.h>
// // #include <iostream>
// // using namespace std;
// void swap(float *a, float *b)
// {
//     float x;
//     x = *b;
//     *b = *a;
//     *a = x;
// }
// void quickSort(float *a, int l, int r)
// {
//     // srand(time(NULL));
//     float key = a[l + rand() % (r - l + 1)];
//     // int key = a[(l+r)/2];
//     int i = l, j = r;
//     while (i <= j)
//     {
//         while (a[i] < key)
//             i++;
//         while (a[j] > key)
//             j--;
//         if (i <= j)
//         {
//             if (i < j)
//                 swap(&a[i], &a[j]);
//             i++;
//             j--;
//         }
//     }
//     if (l < j)
//         quickSort(a, l, j);
//     if (i < r)
//         quickSort(a, i, r);
//     // quickSort(a, 1, j);
//     // quickSort(a, i, r);
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     float *a = NULL;
//     // float *a = (float *) malloc( n * sizeof( float ));
//     a = (float *)malloc(n * sizeof(float *));
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%f", &a[i]);
//     }
//     // int n = 6;
//     // float a[6] = {1.512, 5.123, 2.123, 3.2312, 10.123, 4.169};
//     quickSort(a, 1, n - 1);
//     for (int i = 0; i < n; i++)
//     {
//         printf("%.2f ", a[i]);
//     }
//     // delete []a;
//     free(a);
//     return 0;
// }

// Code Hieu
#include <iostream>
#include <cstdio>
using namespace std;

void qs(float *p, int l, int r)
{
    int right = r;
    int left = l;
    float k = p[(l + r) / 2];
    while (left <= right)
    {
        while (p[left] < k)
            left++;
        while (p[right] > k)
            right--;
        if (left <= right)
        {
            if (left < right)
            {
                swap(p[left], p[right]);
            }
            left++;
            right--;
        }
    }
    if (l < right)
        qs(p, l, right);
    if (left < r)
        qs(p, left, r);
}

int main()
{
    int n;
    //cin>>n;
    scanf("%d", &n);
    float *a = new float[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
    }

    qs(a, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%.2f ", a[i]);
    }
    delete[] a;
    return 0;
}