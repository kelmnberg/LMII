# include <stdio.h>
char c;
int main()
{
printf("Donner un caractère\n");
scanf("%c" ,&c);
if (('a'<=c && c<='z')||('A'<=c && c<='Z')) printf("Le caractère lu est une lettre alphabétique\n");
else if ('0'<=c && c<='9') printf("Le caractère lu est un chiffre.\n");
else printf("Le caractère lu est spécial.\n");
return 0;
}
