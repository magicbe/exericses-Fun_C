/* input10.c */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    double score;
    scanf("%d", &i);
    printf("我目前有 %d 元\n", i);
    scanf("%lf", &score);
    printf("我的 C 語言成績是 %f 分\n", score);
    system("PAUSE");
    return 0;
}