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
	if (a + b > c && b + c > a&&a + c> b)
	{
		if(a == b && b == c)
		{
			printf("3");
		}
		else if (a == b || a == c || b == c)
		{
			printf("2");
		}
		else
		{
			printf("1");
		}
		
	}
	else
	{
		printf("0");
	}
	return 0;
}
