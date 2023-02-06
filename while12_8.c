#include<stdio.h>
main(){
	
	int i = 1,n,sum = 0;
	
	printf("ENTER VALUE : ");
	scanf("%d",&n);
	
	while(n>=i){
		
		sum = sum + n;
		
		n--;
		
	}	
	printf("%d",sum);
	
}
