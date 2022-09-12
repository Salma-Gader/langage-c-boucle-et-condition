#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 echange(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
    printf ("la nouvelle valeur de numero est:%d %d",a,b);
	return b;
}
int main(int argc, char** argv) {
	int a,b;
	printf ("entrer la valeur 1");
	scanf ("%d",&a);
    printf ("entrer le valeur 2");
	scanf ("%d",&b);

	echange(a,b);
	
	return 0;
}
