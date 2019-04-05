#include <stdio.h>
#include <stdlib.h>

int main()
{
	double x, y;

    printf("請輸入浮點數 x: ");
    scanf("%lf", &x);

    printf("請輸入浮點數 y: ");
    scanf("%lf", &y);

    printf("x=%f, y=%f\n", x, y);
	
    system("PAUSE");
    return 0;
}