#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int a, b, c;
     printf("請輸入變數a的值: ");
     scanf("%d", &a);
     printf("請輸入變數b的值: ");
     scanf("%d", &b); 
     printf("請輸入變數c的值: ");
     scanf("%d", &c);
     printf("%d\n", 60<=a && a<100);//||->&&
     printf("%f\n", (b+1)/10.);//b++ -> b+1
     printf("%d\n", a>c?a:c);//c:a ->a:c
     return 0;
}
/*#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int a, b, c;
     printf("請輸入變數a的值: ");
     scanf("%d", &a);
     printf("請輸入變數b的值: ");
     scanf("%d", &b); 
     printf("請輸入變數c的值: ");
     scanf("%d", &c);
     printf("%d\n", 60<=a || a<100);
     printf("%f\n", b++/10.);
     printf("%d\n", a>c?c:a);
     return 0;
}*/
