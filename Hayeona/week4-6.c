#include <stdio.h>
#include <math.h>
double distanc(double x1, double y1, double x2, double y2);
int main(void)
{
    double x1, y1, x2, y2;

    printf("ù ��° ���� x,y : ");
    scanf_s("%lf %lf", &x1, &y1);

    printf("�� ��° ���� x,y : ");
    scanf_s("%lf %lf", &x2, &y2);

    printf("�Ÿ�: %f\n", distanc(x1, y1, x2, y2));
    return 0;
}
double distanc(double x1, double y1, double x2, double y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}