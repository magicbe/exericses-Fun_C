/* practice100.c */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, k;

    printf("請輸入整數 i： ");
    scanf("%d", &i);

    printf("請輸入整數 j： ");
    scanf("%d", &j);

    printf("請輸入整數 k： ");
    scanf("%d", &k);
	
    printf("\n");
    printf("i=|%d|, j=|%d|, k=|%d|\n", i, j, k);
    printf("i=|%3d|, j=|%3d|, k=|%3d|\n", i, j, k);
    printf("i=|%8d|, j=|%8d|, k=|%8d|\n", i, j, k);
    printf("i=|%-8d|, j=|%-8d|, k=|%-8d|\n", i, j, k);
    
    system("PAUSE");
    return 0;
}