//ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����

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