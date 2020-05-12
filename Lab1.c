#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(void)
{
	float x, y, z, a, b; //объявляем тип переменных

	printf("x= "); scanf_s("%f", &x); 
	printf("y= "); scanf_s("%f", &y);
	printf("z= "); scanf_s("%f", &z); //вводим с клавиатуры значения трех переменных
	
	//if ((x == 0) || (y == 0) || (z == 0)) {
		//printf("wrong input");
		//return 0;
	//}

	a = (x - sqrt(fabs(y)) * (x + y / (z + (pow(x, 6) / 4))));

	if (a == 0)
		return 0;

	a = log(abs(a));
	a = pow(a, 0.2);
	b = (pow(x, 2) / (1 * 2 * 3 * 4)) - (pow(x, 5) / (1 * 2 * 3 * 4 * 5 * 6)) - x; //дополнительно используя библиотеку math.h находим значения переменных а и б
	
	printf("a = %f", a); 
	printf(", b = %f", b); //выводим в консоль значение переменной а и переменной б

	_getch();
	return 0;
}