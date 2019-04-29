/*#include <stdio.h>
#include <stdlib.h>

double sum(double a[], int n);
int main () 
{
     double arr[5];
     int i, total;
     for(i=0; i<5; i++) {
          printf("請輸入陣列arr[%d]元素值: ", i);
          scanf("%lf", arr[i]);
     }
     for(i=0; i<5; i++)
          printf("arr[%d]=%.2f\n", i, arr[i]);
     total=sum(arr);
     printf("此陣列的總和為%.2f\n", total);
     return 0;
}

double sum(int a[], int n)
{
     int k;
     double tot;
     for(k=1; k<n; k++)
          tot += a[k];
     return tot;
}*/
#include <stdio.h>
#include <stdlib.h>

double sum(double a[], int n);
int main () 
{
     double arr[5];
     double  total=0;
     int i;
     for(i=0; i<5; i++) {
          printf("請輸入陣列arr[%d]元素值: ", i);
          scanf("%lf", &arr[i]);
     }
     for(i=0; i<5; i++)
          printf("arr[%d]=%.2f\n", i, arr[i]);
     total=sum(arr,i);
     printf("此陣列的總和為%.2f\n", total);
     return 0;
}

double sum(double a[], int n)
{
     int k;
     double tot=0;
     for(k=0; k<n; k++)
        tot += a[k];
     return tot;
}
