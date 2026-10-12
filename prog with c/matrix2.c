#include <stdio.h>
int main(){
	int i,j,n,a;
	char matrix[50][50];
	a = 0;
	printf(" a3tine ech t7eb");
	scanf("%i",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			
			/*printf("matrix[%i][%i]= ",i,j);
			scanf("%i",&matrix[i][j]);*/
			matrix[i][j]=i;
			}
		
		}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				printf("%i",matrix[i][i]);
				}else{
					printf("%i",a);
					}
			
			}
		printf("\n");
		}
	
	
	
	return 0;
	}
