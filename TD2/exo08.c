#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	int n,d;
	
	scanf("%d",&n);
	
	for (d=2; d<n; d++){
		if (n%d==0) {
			printf("n n'est pas premier\n");
			return 0;
		}
	}	
	printf("n est premier\n");
	
	return 0;
	}
