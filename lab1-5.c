#include <stdio.h>
#include <math.h>

int main(void)
{
	float a, b, c;
	printf("gimme a number ");
	scanf_s("%f", &a);
	if (a < 1)
		return 0;
	b = 1;
	c = 1;
	while (b <= a) 
	{
		c++;
		b = b + (1 / c);
	}
	printf("your number is...%f!", b);
	return 0;
}