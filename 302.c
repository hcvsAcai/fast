/*#include <stdio.h>
#include <stdlib.h>
int adjust(int);
int main () 
{
     int score, final;
     printf("請輸入您的分數: ");
     scanf("%d", &score);

     adjust(score);\\final=

     printf("調整後的分數: %d", final);
     return 0;
}

int adjust(int score)
{
\\int temp;
     if (score >= 60) 
          temp = score + 10;\\+5
     else 
          temp = score + 5;\\+10

     return temp;
}*/
#include <stdio.h>
#include <stdlib.h>
int adjust(int);
int main ()
{
 int score, final;
 printf("請輸入您的分數: ");
 scanf("%d", &score);
 final = adjust(score);
 printf("調整後的分數: %d", final);
 return 0;
}
int adjust(int score)
{
 int temp;
 if (score >= 60)
  temp = score + 5;
 else
  temp = score + 10;
 return temp;
}
