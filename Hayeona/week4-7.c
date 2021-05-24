#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (c < a + b)
	{
		if (a == b && b == c)
		{
			printf("0");
		}
		else if (a == b || b == c || c == a)
		{
			printf("0");
		}
		else if (a * a + b * b == c * c)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	else
	{
		printf("0");
	}
}