#include <stdio.h>

int fact(int n){
	if (n==0){
		return 1;
	}
	else{
		return fact(n-1)*n;
		}
	}
int main(){
	int x,n;
	printf("give me lalalo\n");
	scanf("%i",&n);
	x=fact(n);
	printf("fact of %i is %i  \n",n,x);	
	
	return 0;
	}
