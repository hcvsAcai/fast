/*#include <stdio.h>
#include <stdlib.h>

void callFun();
int main()
{
     int i;
     for (i=1; i<=5; i++) {
          callFun();
     }
     return 0;
}

void callFun()
{
     int ai=100, si=100;
     ai++;
     si++;
     printf("ai=%d, si=%d", ai, si);
}*/
#include <stdio.h>
#include <stdlib.h>

void callFun();
int main()
{
     int i;
     for (i=1; i<=5; i++) {
          callFun();
     }
     return 0;
}

void callFun()
{
     static si=100;//static->si
     auto ai=100;//auto->ai
     ai++;
     si++;
     printf("ai=%d, si=%d\n", ai, si);\\ \n
}
