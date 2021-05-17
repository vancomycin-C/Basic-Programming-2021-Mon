//N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오.

#include <stdio.h>
int main()
{
    int i = 0;
    int j = 0;

    printf("몇 단을 출력할 것인지 입력해주세요. : ");
    scanf_s("%d", &i);

    for (j = 1; j <= 9; j++)
    {
    printf("%d x %d = %d\n", i, j, (i * j));
    }
    return 0;
}