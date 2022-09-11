#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num1,num2,sum;
	 
	printf("entrer les deux valeurs");
	scanf("%d %d",&num1,&num2);
	if (num1==num2){
	    sum =(num1+num2)*3;\
		printf("le resultat est %d",sum);
		
	}
	else { 
	  sum =num1+num2;
	  printf("le resultat est %d",sum);
	}
	
	return 0;
}
