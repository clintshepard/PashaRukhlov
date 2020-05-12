#include <stdio.h>
#include <math.h>

int main(void)
{
	int x;
	printf("how much is the fish? ");
	scanf_s("%i", &x);
	if (x < 0) {
		printf("do not cheat!");
		return 0;
	}
	printf("the fish is...%i", x / 2);
	return 0;
}