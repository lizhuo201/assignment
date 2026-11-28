#include <stdio.h>
int main()
{
	int a;
	printf("输入a:");
	scanf_s("%d", &a);
	int b;
	printf("输入b:");
	scanf_s("%d", &b);
	int c;
	printf("输入c:");
	scanf_s("%d", &c);
	double cosC = (a * a + b * b - c * c) / (2.0 * a * b);
	double cosB = (a * a + c * c - b * b) / (2.0 * a * c);
	double cosA = (c * c + b * b - a * a) / (2.0 * c * b);

	double max_angle = ((cosC < cosB ? cosC : cosB) < cosA ? (cosC < cosB ? cosC : cosB) : cosA);
	int type=( max_angle > 0 ? 0 : (max_angle == 0 ? 1 : 2));
	printf("%d", type);
	return 0;
}