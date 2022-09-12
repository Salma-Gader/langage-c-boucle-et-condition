#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() { 
    int a,b,c,e;
	printf("Entre le numero a :\n");
      scanf("%d",&a);
     printf("Entre le numero b :\n");
        scanf("%d",&b);
      printf("Entre le numero c :\n");
         scanf("%d",&c);
       printf("Entre le numero d :\n");
           scanf("%d",&e);
    int Somme = a+b+c+e;
    int Moyenne =Somme/3;
    printf("la somme est : %d ",Somme); 
    printf("la moyenne est : %d",Moyenne);   
    return 0;
}
	
