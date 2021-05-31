#include <stdio.h>
int main() 
{
	int a, b, c, d, i, e;
	int n[10] = { 0 };

	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);

	d = a * b * c;

	while (d != 0) 
	{
		e = d % 10;
		n[e] += 1;
		d /= 10;
	}

	for (i = 0; i < 10; i++) 
	{
		printf("%d\n", n[i]);
	}

	return 0;
}