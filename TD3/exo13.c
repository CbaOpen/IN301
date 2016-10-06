#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float suite_racine(int i, int n){
	
	
	if (i==n) return sqrt(n);
	return sqrt(i + suite_racine(i+1,n));
	}

int main (){
	int n;
	float u;
	
	printf("n=");
	scanf("%d", &n);
	u=suite_racine(1,n);
	
	printf("u = %f\n", u);
	
	return 0;
	}
