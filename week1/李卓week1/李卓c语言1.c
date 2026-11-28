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
	printf("%d", (a == b && b == c) != 1 ? ((a == b || b == c || c == a) != 1 ? ((a+b>c&&a+c>b&&b+c>a )!=1 ?0:1) : 2) : 3);


return 0;
}