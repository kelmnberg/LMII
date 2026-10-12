#include <stdio.h>
int main(){
	int i,j,matrix[50][50],n;
	printf(" a3tine ech t7eb");
	scanf("%i",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			
			printf("matrix[%i][%i]= ",i,j);
			scanf("%i",&matrix[i][j]);
			}
		
		}	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%i\t",matrix[i][j]);
		
			
			}
		printf("\n");
		
		}
	
	return 0;
	}
