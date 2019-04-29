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

int main()
{
     int arr[6]={10, 20, 30, 40, 50, 60};
     int i, total=0;
     for (i=0; i<6; i++) {
          total += arr[i];
     }
     printf("總和為%d\n", total);
     return 0;
}
