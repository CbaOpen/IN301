#include <stdio.h>
#include <stdlib.h>


void Syracuse(int u){
	int n;
		
	while (u!=1){
		if (u%2==0)		u=u/2;
		else u=3*u+1;	
		n+=1;
		printf("le nombre d'iteration pour u=%d est : %d\n",u,n);
		
		}
	
	}



int main () {
	
	//variables
	
	int u;
	
	printf("u = ");
	scanf("%d", &u);
	Syracuse(u);
	
	
	return 0;
	}
