#include <stdio.h>
int main(){
	int n,i,s;
	printf("donner un entier");
	scanf("%i",&n);
	s=0;
	for(i=1;i<n;i++){
		if(n%i == 0){
			
			s=s+i;
			printf("%i",i);
			}
		
		}
	if(s==n){
		printf("le nombre %i est parfais\n",n);
		
		}else{
			printf("le nombre %i est n'est pas parfais\n",n);

			}
	
	
	return 0;
	}
