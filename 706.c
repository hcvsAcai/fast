/*#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main () 
{
     int x, y;
     double result;
     printf("請輸入x, y的值: ");
     scanf("%d %d", &x, &y);
     result=exp(5)*sqrt((pow(x, y)+log(100))/pow(x, 2)*pow(y, 3));
     printf("result=%f\n", result);
     return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main () 
{
     int x, y;
     double result;
     printf("請輸入x, y的值: ");
     scanf("%d %d", &x, &y);
     result=(exp(5)*sqrt(pow(x, y)+log(100))/pow(x, 2))*pow(y, 3);
     printf("result=%lf\n", result);
     return 0;
}
