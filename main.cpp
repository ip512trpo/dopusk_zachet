#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "h.h"
//#include "disc.cpp"
int main()
{
	float a, b, c;
	printf("Input a, b, c: ");
	scanf("%f %f %f", &a, &b, &c);
	printf("%.0fx^2 + %.0fx + %.0f = 0", a, b, c);
	float x1, x2;

//	intput(&a, &b, &c);
//	d = b*b-4*a*c;
	
	if(disc(a, b, c)>=0 && a != 0 && b != 0 && c !=0)
	{
		x1 = 2*c/(-b-sqrt(disc(a, b, c)));
		x2 = 2*c/(-b+sqrt(disc(a, b, c)));
		printf("\n\nx1 = %.3f, x2 = %.3f", x1, x2);
	}
	
	else
	{
		printf("\n\nD = %.0f", disc(a, b, c));
	}
	
	return 0;
}
