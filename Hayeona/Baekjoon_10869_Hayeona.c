//�� �ڿ��� A�� B�� �־�����. �̶�, A+B, A-B, A*B, A/B(��), A%B(������)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 

#include <stdio.h>
int main() 
{
	int a = 0;
	int b = 0;

	scanf_s("%d %d", &a, &b);
	printf("%d \n", a + b);
	printf("%d \n", a - b);
	printf("%d \n", a * b);
	printf("%d \n", a / b);
	printf("%d \n", a % b);

	return 0;
}