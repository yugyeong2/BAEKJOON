#include <stdio.h>

int main() {
	int A, B;
	double re;
	scanf("%d %d", &A, &B);
	re = (double)A/B;
	printf("%.9lf", re);
	return 0;
}