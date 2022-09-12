#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int add(int A,int B){

    int somme= A+B;
    return somme;
}


int main() {
	int A,B;
	int somme;
	
	printf("entrer le numero1 et entre le numero2");
	scanf("%d%d",&A,&B);
	somme=add(A,B);
	printf ("la somme de numero1 et numero 2 est:%d",somme);
	return 0;
}
