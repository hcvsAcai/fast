#include <stdio.h>
#include <stdlib.h>

int main () 
{
     char ch; 
     printf("請問您的身份:以字母表示分別如下：\nU:表示大學生，M:表示研究生，P:表示博士生 ");
     scanf("%c", &ch);
     switch (ch) {
          case 'U'://加''，break
               printf("您是大學生\n");break;
          case 'M':
               printf("您是研究生\n");break;
          case 'P':
               printf("您是博士生\n");break;
          default://加:
               printf("您輸入身份不正確\n");
     }
return 0;
}
/*#include <stdio.h>
#include <stdlib.h>

int main() 
{
     int score, adjust;
     printf("請輸入分數:");
     scanf("%d", score);
     if (score >= 60);
          adjust = score+10;
     else 
          adjust = score+5;
     printf("調整後的分數為%d", adjust);
     return 0;
}*/
