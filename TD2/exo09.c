#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int n,m,x,y;
	int i;
	
	scanf(" %d",&n);
	scanf(" %d",&m);
	
	x=0; y=0; 
	
	for (i=1;i<n;i++){
		if (n%i==0) x=x+i;
		
		}
	
	for (i=1;i<m;i++){
		if (m%i==0) y=y+i;
		}
	
	if (x==m && y==n) printf("n et m sont amis\n");
	else printf("n et m ne sont pas amis\n");
	
	return 0;
	}
