#include<stdio.h>

main(){
	
	int i = 1,n;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	while(i<=n){
		
		if(n%2==0){
			
			printf("%d\n",n);
			
		}
		
		n--;
	}
	
}
