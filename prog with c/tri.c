#include <stdio.h>
int main(){
	int n,i,j,a,t[20];
	printf("donner le taille de tableau");
	scanf("%i",&n);
	for(i=0;i<n;i++){
		printf("t[%i]= ",i);
		scanf("%i",&t[i]);
		}
	for(j=0;j<=n-1;j++){
		
			if(t[j]>t[j+1]){
				a = t[j];
				t[j] = t[j+1];
				t[j+1] = a;
				
				}
			
		}
	for(i=0;i<n;i++){
		printf("%i\t",t[i]);
		
		} 
	
	
	return 0;
	}
