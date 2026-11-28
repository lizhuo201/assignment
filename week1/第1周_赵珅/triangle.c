#include <stdio.h>


int main() {

	int a = 0,
		b = 0,
		c = 0;
	printf("请输入三边[用逗号分隔]:");
	scanf_s("%d，%d，%d", &a, &b, &c);

	int k = (a + b <= c || a + c <= b || b + c <= a) ?
		0 : ((a == b && b == c) ?
			3 : ((a == b || b == c || a == c) ?
				2 : 1));
	printf("%d", k);
	if (k) {
		if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b)printf("1");
		if (a * a + b * b < c * c || b * b + c * c < a * a || a * a + c * c < b * b)printf("2");
		else printf("0");
	}


	return 0;
}