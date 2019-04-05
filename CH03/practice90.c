/* practice90.c */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	double x, y, z;

    printf("請輸入浮點數 x：");
    scanf("%lf", &x);

    printf("請輸入浮點數 y：");
    scanf("%lf", &y);

    printf("請輸入浮點數 z：");
    scanf("%lf", &z);

    printf("x=|%-8.1f|, y=|%-8.1f|, z=|%-8.1f|\n", x, y, z);

    system("PAUSE");
    return 0;
}