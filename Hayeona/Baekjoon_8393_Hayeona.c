//n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include<stdio.h>
int main() 
{
    int num, i;
    int sum = 0;

    printf("n�� ���� �Է��ϼ���. : ");
    scanf_s("%d", &num);
    for (i = 1; i <= num; i++) 
    {
        sum += i;
    }
    printf("\n%d\n", sum);
    return 0;
}