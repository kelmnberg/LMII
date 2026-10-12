#include <stdio.h>
int main(){
	int i,n,a,b;
	float t[20],TP[20],TN[20];
	do{
		printf("donner un entier compris entre 5 et 20\n");
		scanf("%i",&n);
		}while(n<2);
	for(i=0;i<n;i++){
		printf("t[%i]= ",i);
		scanf("%f",&t[i]);
		}
	a=0;
	b=0;
	for(i=0;i<n;i++){
		if(t[i]>0){
			TP[a] = t[i];
			a++;
			
			}else{
				TN[b] = t[i];
				b++;
				}
		
		}
	for(i=0;i<a;i++){
		printf("%.2f\t",TP[i]);
		}
	printf("\n");
	for(i=0;i<b;i++){
		printf("%.2f\t",TN[i]);}
		
		
		
		
		
	return 0;}
