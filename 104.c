#include <stdio.h>
#include <stdlib.h>

int main() 
{
     int unit;
     double price=23.34 //運用換行的原理
     , total;
     printf("請問您要買幾瓶蘋果汁? ");
     scanf("%d", &unit);//&
     total = unit*price;
     printf("我買了%d瓶100%的蘋果汁\n", unit);
     printf("花了%f元", total);
     return 0;
}
/*#include <stdio.h>
#include <stdlib.h>

int main() 
{
     int unit;
     double price=23.34; 
     int total;
     printf("請問您要買幾瓶蘋果汁? ");
     scanf("%d", unit);
     total = unit*price;
     printf("我買了%d瓶100%的蘋果汁\n", unit);
     printf("花了%f元", total);
     return 0;
}*/
