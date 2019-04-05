/* input20.c */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    double score;
    printf("請輸入你有多少錢： ");
    scanf("%d", &i);
    printf("我目前有 %d 元\n\n", i);
    printf("請輸入分數： ");
    scanf("%lf", &score);
    printf("我的 C 語言成績是 %f 分\n", score);
    system("PAUSE");
    return 0;
}