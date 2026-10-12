/* compare lexicograpjhikemennet !!!!!! pffffff*/
# include <stdio.h>
# include <string.h>
int main(){
	char a[100];
	char b[100];
	printf("enter 2 characters\n");
	scanf("%s",a);
	scanf("%s",b);
	if(strcmp(a,b) > 0){printf("%s précède %s",a,b);}
	else if(strcmp(a,b) < 0){printf("%s précède %s",b,a);}
	else{printf(" sont egaux :)");}
	
	return 0;
	} 
