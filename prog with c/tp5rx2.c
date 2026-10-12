#include <stdio.h>
int main(){
	int i,n;
	float t[20],max,min;
	do{
		printf("donner un entier compris entre 5 et 20\n");
		scanf("%i",&n);
		}while(n<2);
	for(i=0;i<n;i++){
		printf("t[%i]= ",i);
		scanf("%f",&t[i]);
		}
	max = t[0];
	min = t[0];
		for(i=1;i<n;i++){
			if(t[i]>max){
				max = t[i];
				}
			if(t[i]<min){
				min = t[i];
				}
			}
		
	printf("le max est %.2f, le min est %.2f",max,min);
	
	return 0;
	}
