#include<stdio.h>
int a = 0;b = 0;c = 0;e = 0;
int main()
{
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	if (a > b)
	{
		e = a;
		a = b;
		b = e;

	}
	if (a > c)
	{
		e = a;
		a = c;
		c = e;


	}
	if (b > c)
	{
		e = b;
		b = c;
		c = e;

	}
	if (a + b > c)
	{
		if (a*a+b*b<=c*c)
		{
			if (a * a + b * b== c * c)
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
			printf("2");
		}
	}
	else
	{
		printf("不构成三角形");

	}
	return 0;
}