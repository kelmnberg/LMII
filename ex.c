#include <stdio.h>
#include <stdlib.h>
typedef struct neode{-
    float val;
    struct neode* suivant;
    } ptr;
ptr *tete =NULL;
neode * neveau(){
    float e;
    scanf("donner votre reel",&e)
    noede *element = malloc(sizeof(neode));
    (elemen ->val )= e;

    return element;
    }
void add_front(neode **tete,neode * N){
    (N->suivant) =*tete;
    *tete = N;
    }
void add_mid(noede **,noede *N){
    noede *p =*tete;
    while ((p->suivant) != NULL){
        p=(p->suivant);
    }
    (p->suivant) = N;
    (N->suivant) = NULL;
    }
void affiche(noede **tete){
    while ((tete->suivant) != NULL){
        printf(tete->val);
        tete = tete->suivant;*
    }
    }
