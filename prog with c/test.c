#include <stdio.h>
int main(){
	int n,i,t[20];
	do{
		printf("donner un entier compris entre 5 et 20\n");
		scanf("%i",&n);
		}while(n<5|| n>20);
		/*n=5;*/
	for(i=0;i<n;i++){
		printf("t[%i]= ",i);
		scanf("%i",&t[i]);
		}
	for(i=0;i<n;i++){
		printf("t[%i]=%i\t",i,t[i]);
		
		}
	
	
	return 0;
	}
