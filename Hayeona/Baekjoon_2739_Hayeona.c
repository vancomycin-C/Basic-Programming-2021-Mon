//N�� �Է¹��� ��, ������ N���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>
int main()
{
    int i = 0;
    int j = 0;

    printf("�� ���� ����� ������ �Է����ּ���. : ");
    scanf_s("%d", &i);

    for (j = 1; j <= 9; j++)
    {
    printf("%d x %d = %d\n", i, j, (i * j));
    }
    return 0;
}