 #include <stdio.h>
int main(void)
{
    int a = 0, b = 1, c;  
    int i = 1, n; 

    printf("n을 입력해주세요. : ");
    scanf_s("%2d", &n);

    for (i = 1; i <= n + 1; ++i)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
} 