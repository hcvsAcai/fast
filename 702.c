/*#include <stdio.h>
#include <stdlib.h>
int main () 
{
    char string[20];
    double output;//int
    printf("請輸入一數字的字串: ");
    scanf("%s", string);
    output=atoi(string);
    printf("%s轉換後的整數為%f\n", string, output);//%d
    return 0;
}*/
#include <stdio.h>
#include <stdlib.h>
int main () 
{
    char string[20];
    int output;
    printf("請輸入一數字的字串: ");
    scanf("%s", string);
    output=atoi(string);
    printf("%s轉換後的整數為%d\n", string, output);
    return 0;
}
