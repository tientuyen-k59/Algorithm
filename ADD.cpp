// #include <iostream>
// #include <iomanip>
// using namespace std;
// void quickSort(double *a, int l, int r)
// {
//     // srand(time(NULL));  //khoi tao tham so ham rand()
//     double key;
//     key = a[(l+r)/2];  //lay khoa la gia tri ngau nhien tu a[l] -> a[r]
//     //int key = a[(l+r)/2];
//     int i = l, j = r;
 
//     while(i <= j)
//     {
//         while(a[i] < key) i++;       // tim phan tu ben trai ma >=key
//         while(a[j] > key) j--;       // tim phan tu ben trai ma <=key
//         if(i <= j)
//         {
//             if (i < j)
//                 swap(a[i],a[j]);
//               // doi cho 2 phan tu kieu int a[i], a[j].
//             i++;
//             j--;
//         }
//     }
//     //bay gio ta co 1 mang : a[l]....a[j]..a[i]...a[r]
//     if (l < j) quickSort(a, l, j);   // lam lai voi mang a[l]....a[j]
//     if (i < r) quickSort(a, i, r); // lam lai voi mang a[i]....a[r]
// }
// int main(){
//     int n;
//     cin>>n;
//     double *m = new double[n];
//     for (int i = 0; i<n;i++){
//         double a;
//         cin>>a;
//         m[i] = a;
//     }
//     quickSort(m, 0 ,n-1);
//     cout<<std::fixed;
//     for (int i = 0; i<n;i++){
//     cout<<setprecision(2)<<m[i]<<" ";
//     }
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
int main()
{
    double a, b;
    scanf("%lf", &a);
    scanf("%lf", &b);
    printf("%.0f", a + b);
    return 0;
}