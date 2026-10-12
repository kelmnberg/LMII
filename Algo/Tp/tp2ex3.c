#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    typedef struct{
        char nom[20];
        int age[100];
        char filiere[50];
        float *note;

    }etudiant;
    etudiant* makeetudiant(){

        etudiant *ptr = (etudiant*)malloc(5 * sizeof(etudiant));
        return ptr;

    }

    etudiant* initetudiant(etudiant *ptr){
        int i =0;
        printf("donner le nom\n");
        scanf("%s",ptr->nom);

        printf("donner l'age\n");
        scanf("%i",ptr->age);

        printf("donner le filiere\n");
        scanf("%s",ptr->filiere);

        ptr->note = (float*)malloc(5 * sizeof(float));

        printf("donner les 4 notes\n");/*supposons 4 notes*/

        for(i;i<4;i++){
            scanf("%f",&ptr->note[i]);
        }

        return ptr;
    }

    etudiant* viewetudiant(etudiant *ptr){

       printf("le nom est : %s\n",ptr->nom);
       printf("l'age est : %hd\n",ptr->age);
       printf("le filiere est : %s\n",ptr->filiere);
       printf("les note est : \n");
       for(int i =0;i<4;i++){
        printf("%.2f",ptr->note[i]);
       }

       return ptr;


    }

    float moyene(etudiant *ptr){
        float sum = 0.0;
        for(int i =0;i<4;i++){
            sum = sum+ ptr->note[i];
       }
       return sum/4.0;

    }

    int main(){
        etudiant *ptr = NULL;
        ptr = makeetudiant();
        initetudiant(ptr);
        viewetudiant(ptr);
        moyene(ptr);


    return 0;
    }

