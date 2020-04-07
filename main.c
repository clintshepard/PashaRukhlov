#include <stdio.h>
#include <math.h>
#include <conio.h>

int	main(void)
{
	float a, s, c, r;

	printf("a = "); scanf_s("%f", &a);

	s = sin(a);
	c = cos(a);

	r = s * s + c * c;

	printf("sin^2(a)+cos^2(a) = %f", r);

	_getch();
	return 0;
}