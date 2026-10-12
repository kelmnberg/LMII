#include<stdio.h>
void inser(int n,int j,int x,int t[]){
	int i;
	t[j] = x;
	for(i=1;i<n-j+1;i++){
		t[j+i]=t[j+i+1];
		
		}
	for(i=0;i<n+1;i++){
		printf("%i\t",t[i]);
		}
	
	
	}

int main() {
	int t[50],i;
	for(i=0;i<8;i++){
		printf("t[%i]= ",i);
		scanf("%i",&t[i]);
		}
	inser(8,7,451,t);
	
	
	
	
	
	return 0;
	}
	
