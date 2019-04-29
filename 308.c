/*#include <stdio.h>
#include <stdlib.h>

int main()
{
     int arr[5]={10, 20, 30, 40, 50, 60};
     int i, total=0;
     for (i=1; i<6; i++) {
          total += arr[i];
     }
     printf("總和為%f\n", total);
     return 0;
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
