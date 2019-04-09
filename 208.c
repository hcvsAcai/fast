#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int i, total=0; //=0
     for (i=2; i<=100; i+=2)//i=1 ->i=2，i++ ->i+=2
          total += i;
     printf("1到100的偶數和: %d\n", total);
     return 0;
}
/*#include <stdio.h>
#include <stdlib.h>

int main () 
{
     int i, total; 
     for (i=1; i<100; i++);
          total += i;
     printf("1到100的偶數和: %d\n", total);
     return 0;
}*/
