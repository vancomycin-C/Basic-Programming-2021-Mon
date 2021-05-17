//첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

#include <stdio.h>
int main() 
{
    int i, j, n;

    scanf_s("%d", &n);
    for (i = 1; i <= n; i++) 
    {
        for (j = 0; j < i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}