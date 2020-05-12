#include <stdio.h>
#include <math.h>

int main(void)
{
	int n,y;
	
	printf("input = ");
	scanf_s("%i", &n);
	y = 0;
	while (n > 0) {
		y = y + fmod(n, 10);
		n = n/10;
	}
	printf("sum = %i", y);
	
	return 0;
}