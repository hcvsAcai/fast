/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define random(x) rand()%x
int main() 
{
     int i, j;
     int x;
     printf("隨機數的最大值為: ");
     scanf("%d", &x);
     for (i=1; i<5; i++) {
          for (j=1; j<4; j++) {
               printf("%5d ", random(x));
          }
          printf("\n");
     }
     return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define random(x) rand()%x+1
int main() 
{
     int i, j;
     int x;
     printf("隨機數的最大值為: ");
     scanf("%d", &x);
     for (i=0; i<5; i++) {
          for (j=0; j<4; j++) {
               printf("%5d ", random(x));
          }
          printf("\n");
     }
     return 0;
}
