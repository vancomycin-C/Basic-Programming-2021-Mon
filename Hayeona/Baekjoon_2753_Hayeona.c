//연도가 주어졌을 때, 윤년이면 1, 아니면 0을 출력하는 프로그램을 작성하시오.

#include <stdio.h>
int main()
{
    int n = 0;
    scanf_s("%d", &n);

    if ((n % 4 == 0) && ((n % 100 != 0) || (n % 400 == 0)))
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}