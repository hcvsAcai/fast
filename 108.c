#include <stdio.h>
#include <stdlib.h>

int main () 
{
float a, b, c, d, e, f;//float的資料用f
printf("請輸入第一個浮點數: ");
scanf("%f", &a);
printf("請輸入第二個浮點數: ");
scanf("%f", &b); 
printf("請輸入第三個浮點數: ");
scanf("%f", &c);
printf("請輸入第四個浮點數: ");
scanf("%f", &d);
printf("請輸入第五個浮點數: ");
scanf("%f", &e);
printf("請輸入第六個浮點數: ");
scanf("%f", &f);

printf("\n向右靠齊\n");
printf("%10.2f %10.2f %10.2f\n", a, b, c);//.2小數點後兩位
printf("%10.2f %10.2f %10.2f\n", d, e, f);

printf("\n\n向左靠齊\n");
printf("%-10.2f %-10.2f %-10.2f\n", a, b, c);
printf("%-10.2f %-10.2f %-10.2f\n", d, e, f);

return 0;
}
/*#include <stdio.h>
#include <stdlib.h>

int main () 
{
double a, b, c, d, e, f;
printf("請輸入第一個浮點數: ");
scanf("%f", &a);
printf("請輸入第二個浮點數: ");
scanf("%f", &b); 
printf("請輸入第三個浮點數: ");
scanf("%f", &c);
printf("請輸入第四個浮點數: ");
scanf("%f", &d);
printf("請輸入第五個浮點數: ");
scanf("%f", &e);
printf("請輸入第六個浮點數: ");
scanf("%f", &f);

printf("\n向右靠齊\n");
printf("%10f %10f %10f\n", a, b, c);
printf("%10f %10f %10f\n", d, e, f);

printf("\n\n向左靠齊\n");
printf("%-10f %-10f %-10f\n", a, b, c);
printf("%-10f %-10f %-10f\n", d, e, f);

return 0;
}*/
