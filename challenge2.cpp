#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char lettre;
	printf("entrer un caractere: ");
	scanf("%c",&lettre);
	switch(lettre){
		    case'a':
		    printf("voyelle");
		    break;
		    case'o':
			printf("voyelle");
			break;
			case'e':
			printf("voyelle");
			break;
			case'u':
			printf("voyelle");
			break;
			case'i':
			printf("voyelle");
			break;
			case'y':
			printf("voyelle");
			break;
			default:
				printf("c'est pas un voyelle");
		}   
		
	
	
	return 0;
}
