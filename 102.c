#include <stdio.h>                   
#include <stdlib.h>

int main()
{ 
     double a, b;
     printf("請輸入兩個浮點數:");
     scanf("%lf %lf", &a, &b);//lf，&
     double total = a+b;//double
     printf("total=%f", total);
     return 0;
}
/*#include <stdio.h>
#include <stdlib.h>

int main()
{ 
     double a, b;
     printf("請輸入兩個浮點數:");
     scanf("%d %d", a, b);
     total = a+b;
     printf("total=%f", total);
     return 0;
}*/
