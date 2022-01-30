#include <stdio.h>

int main()
{
	int a, d, n = 20;
	//a = clen, d = diference
	printf("Vlozte clen: ");
	scanf_s("%d",&a);
	printf("Vlozte diferenci: ");
	scanf_s("%d", &d);
	int N = 1;
	for (int i = 1; i <= 20; i++) {
		printf("%d ", (a + (N - 1) * d));
		N++;
	}
}
