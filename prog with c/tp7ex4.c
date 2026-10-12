# include <stdio.h>
# include <string.h>
void del(char *a,int v){
	int i;
	for(i=v;i<strlen(a)-1;i++){
		a[i] = a[i+1];
		}
		a[i] = '\0';
	}
int main(){
	char TXT[200];
	puts("donner jdehs uejhux h ");
	gets(TXT);
	int i;
	for(i=0;i<strlen(TXT);i++){
		if((TXT[i] =='e')){
			del(TXT,i);
			}
		}
	puts(TXT);
	
	return 0;}
