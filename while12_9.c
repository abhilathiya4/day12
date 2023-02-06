#include<stdio.h>
main(){
	
	int i = 1,n,fact = 1;
	
	printf("ENTER VALUE : ");
	scanf("%d",&n);
	
	while(n>=i){
		
		fact = fact * n;
		
		n--;
		
		
	}	
	printf("%d",fact);
	
}
