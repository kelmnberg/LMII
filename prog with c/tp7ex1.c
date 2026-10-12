#include <stdio.h>
#include <string.h>

int main(){
	char name[100], last_name[100];
	int len;
	printf("name? \n");
	scanf("%s", name);
	printf("last name? \n");
	scanf("%s", last_name);
	len = strlen(name) + strlen(last_name);
	printf("your full name length is : %i", len);
	
	return 0;
}
