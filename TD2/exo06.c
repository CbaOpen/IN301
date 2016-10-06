#include <stdio.h>
#include <stdlib.h>

int main(){
	int x,y,a;
	a=0;
	
	scanf("x %d",&x);
	scanf("y %d",&y);
	printf("%d x %d\n",x,y);
	
	while(x>1){
		if (x%2==0){
			x=x/2; y=2*y; 
			}
		else {
			x=x-1; a=a+y;
			}
		printf("= %d x %d + %d\n",x,y,a);
		}
	
	x=x*y+a;
	printf("= %d\n",x);
	
	
	
	return 0;
	}
