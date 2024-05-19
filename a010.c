#include<stdio.h>

int main(void) {
	int a, i;
	scanf("%d", &a);
	for (i = 2; i <= a; i++)
	{
		if (a % i == 0) {
			int c = 0;
			while (a % i == 0) {
				a /= i;
				c++;
			}
			if (c == 1) {
				printf("%d", i);
			}
			else {
				printf("%d^%d", i, c);
			}
			if (a != 1) {
				printf(" * ");
			}
		}
	}
}