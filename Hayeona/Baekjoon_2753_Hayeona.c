//������ �־����� ��, �����̸� 1, �ƴϸ� 0�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

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