# include <stdio.h>
# include <string.h>
int Div(int a, int b) {
    if ( a % b != 0) {
        return (a -1)/ b ;
    } else {
        return a / b;}
    
}
/*el fonction hedhi lezme bech t3rf el nos mt3 chaine, mtnjmch just ta9sam 3ale 2!!!, idhe taille de chaine impair
 * , 7 par exmp, 7/2 =3.5, me yefhimhech
 * , fama 7loul o5ra me8ir el fonction eme hedhi ashal 7eje rithe*/
int main(){
	char ch1[100],ch2[100],c[100],d[100],ch3[200];
	int a,b;
	puts(" character 1 ");
	gets(ch1);
	puts("character 2 ");
	gets(ch2);
	a = Div(strlen(ch1),2);
	b = Div(strlen(ch2),2);
	strncpy(c,ch1,a);
	c[a] = '\0';
	strncpy(d,&ch2[b],strlen(ch2)-b+1);
	d[strlen(ch2)-b] = '\0';
	strcat(ch3,c);
	strcat(ch3,d);
	puts(ch3);
	
	return 0;
	}

