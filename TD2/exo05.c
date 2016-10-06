#include <stdlib.h>
#include <stdio.h>
#include "math.h"


int main(){
	int h,m,s;
	
	h=0; m=0;
	scanf("%d",&s);
	
	printf("%d\n",s);
	
	while(s>=3600){
		s=s-3600;
		h=h+1;
		}
	while(s>=60){
		s=s-60;
		m=m+1;
		}
	
	if (h>1) printf("%d heures ",h);
	else printf("%d heure ",h);
	
	if (m>1) printf("%d minutes ",m);
	else printf("%d minute ",m);
	
	if (s>1) printf("%d secondes\n",s);
	else printf("%d seconde\n",s);
	
	return 0;
}
