//n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.

#include<stdio.h>
int main() 
{
    int num, i;
    int sum = 0;

    printf("n의 값을 입력하세요. : ");
    scanf_s("%d", &num);
    for (i = 1; i <= num; i++) 
    {
        sum += i;
    }
    printf("\n%d\n", sum);
    return 0;
}