#include <stdio.h>
int main(){
	int n,a,b,i;
	printf("donner un entier\n");
	scanf("%i",&n);
	a=0;
	b=0;
	for(i =0;i<=n;i++){
		if(i%2 ==0){
			a=a+i;
			
			
			}else{
				b=b+i;
				}
		
		}
	printf("le somme des paires est %i",a);
	printf("\n");
	printf("le somme des imppaires est %i",b);

	
	
	
	
	return 0;
	}
