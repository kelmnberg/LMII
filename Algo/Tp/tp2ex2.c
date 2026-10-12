#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    typedef struct {
    char titre[30];
    char auteur[20];
    char date[20];
    }Livre;
    void saisirlivre(Livre *livre) {
    printf("donner le titre\n");
    scanf("%s",livre->titre);

    printf("donner le nom de auteur\n");
    scanf("%s",livre->auteur);

    printf("donner le date\n");
    scanf("%s",livre->date);
    }
     void infolivre(Livre *livre ){
    printf("le titre de livre est %s\n",livre->titre);
    printf("le nom de auteur est  %s\n",livre->auteur);
    printf("le date est %s\n",livre->date);
    }

    void remplivres(Livre *livre,int n){
    for(int i =0;i<n;i++){
        saisirlivre(livre);
    }
    }
    void afflivres(Livre *livre,int n){
    for(int i =0;i<n;i++){
        infolivre(livre);
    }
    }


    int main( ){
        int n;
        n=2;
        Livre *l = (Livre*)malloc(n * sizeof(Livre));
        if (l == NULL) {
                printf("Memory allocation failed\n");
                return 1;}
        remplivres(n,1);
        afflivres(n,1);

    return 0; }
