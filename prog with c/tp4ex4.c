#include <stdio.h>
int main(){
	int i,n,U3,U1,U2;
	printf("donner le rang du suite\n");
	scanf("%i",&n);
	U1 = 1;
	U2 = 1;
	U3 = 0;
	if(n == 1|| n==2){
		U3 = 1;
		
		}else{
			
			for(i=0;i<=n-3;i++){
				U3 = U1+U2;
				U1 = U2;
				U2 = U3;
				}
			}
	for(i=0;i<=n-3;i++){
		
		U3 = U1+U2;
		U1 = U2;
		U2 = U3;
		}
	
	printf("votre term est: %i",U3);
	
	return 0;
	}
	
