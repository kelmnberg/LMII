#include <stdio.h>
int main(){
	int i,n,x,a,t[20];
	a=0;
	printf("donner le taille de tableau ");
	scanf("%i",&n);
	for(i=0;i<n;i++){
		printf("t[%i]= ",i);
		scanf("%i",&t[i]);
		}
	printf("donner l'entier a chercher");
	scanf("%i",&x);
	for(i=0;i<n;i++){
		if(t[i]==x){
			a++;
			}
		
		}
	
	printf("%i mwajoud %i marat\n",x,a);
	
	return 0;
	}
