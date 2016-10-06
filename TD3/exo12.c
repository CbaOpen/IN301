#include <stdio.h>
#include <stdlib.h>


int factorielle(int n){
	int f;
	if (n<=1) f=1;
	
	else f=n*factorielle(--n); //--n ne marche pas il faut mettre n-1	
	return f; 
	
	}

