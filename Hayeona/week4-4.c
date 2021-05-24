#include<stdio.h>
int sum(int n);
int main()
{
	int n;
	printf("n을 입력해주세요. : ");
	scanf_s("%d", &n);
	printf("%d : %d", n, sum(n));

	return 0;
}
int sum(int n)
{
	if (n == 1)
		return 1;
	else
		return n + sum(n - 1);
}