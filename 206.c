#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int i=0, total=0;//=0
     while (i < 100)//刪掉=
     {
          i++;
          total += i;
     } 
     printf("1加到100的總和:%d\n", total);
     return 0;
}
/*#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int i=1, total=0;
     while (i <= 100)
     {
          i++;
          total += i;
     } 
     printf("1加到100的總和:%d\n", total);
     return 0;
}*/
