#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	// Variables

	float lim = 0, last_lim = 0;
	float precision = pow(10, -9);
	int i = 1;

	// Programme

	do
	{
		last_lim = lim;	
		lim = lim + 1.0/(pow(i, 2));
		i++;
	}	while (fabs(lim - last_lim) > precision);

	printf("%f \n", lim);
	
	return 0;
}
