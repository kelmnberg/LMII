# include <stdio.h>
double f=1;
int c,j;
int main()
{
printf("Donner un entier\n");
scanf("%i",&c);
for(j=1 ; j<=c ; j++) { f =f*j;}
printf("%i!=%lf=\n",c,f);
return 0;
}

