#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(void)
{
	float x,y;

	printf("x = "); 
	scanf_s("%f", &x);
	if (x < -1) {
		y = -1. / (x*x);
		printf("y = %f", y);
		_getch();
		return 0;
	}
		
	if (x < 2) {
		y = sqrt(x);
		printf("y = %f", y);
		_getch();
		return 0;
	}

	if (x >= 2) {
		printf("y = 4");
		_getch();
		return 0;
	}
}