#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int i=0, total=0; //=0
     do {
          i+=2;
          total += i;
     } while (i<100);
     printf("1到100的偶數和: %d\n", total);
     return 0;
}
/*#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int i=1, total; 
     do {
          i+=2;
          total += i;
     } while (i<100);
     printf("1到100的偶數和: %d\n", total);
     return 0;
}*/
