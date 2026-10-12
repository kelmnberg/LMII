#include<stdio.h>

int len(){
	int n;
	do{
		printf("donner un entier entre 2 et 50\n");
		scanf("%i",&n);
		}while(n<2||n>50);
		return n;
		
		}
void remplir(int n,int m,int t[50][50]){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("t[%i][%i]=  ",i,j);
			scanf("%i",&t[i][j]);
			}
		}
	
	
	}
void affiche_pair(int n,int m,int t[50][50]){
	int i,j;
	for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(j%2==0){
					printf("%i\t",t[i][j]);
			}
			
		}
	
	}
}


void affiche(int n, int m, int t[50][50]){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%i\t",t[i][j]);
			}printf("\n");
		}
	}
void affiche_1(int n, int m, int t[50][50]){
	int i;
	for(i=0;i<n;i++){
		
		
		printf("%i\t",t[i][0]);
		printf("\n");
		}
	}
int main(){
	int n,m,t[50][50];
	printf("pour les linge\n");
	n = len();
	printf("pour les columns\n");
	m = len();
	remplir(n,m,t);
	affiche(n,m,t);
	//affiche_1(n,m,t);
	affiche_pair(n,m,t);
	
	return 0;
	}
