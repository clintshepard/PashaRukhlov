#include <math.h>
#include <stdio.h>

int main(void)
{
	int i, n, x;
	float c, b, a;

	printf("gimme n ");
	scanf_s("%i", &n);
	printf("gimme x ");
	scanf_s("%f", &x);

	b = 1;
	c = 1;
	for (int i = 1; i <= n; i++)
	{
		a = (sin(i * x));
		b = (a / c) + 1;
		c = i * i;
	}
	printf("result = %i", b);
	
	return 0;

}