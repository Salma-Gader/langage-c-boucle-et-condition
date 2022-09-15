#include <iostream>
#include <string.h>
int main(int argc, char** argv) {
	char chaine1[25];
	char chaine2[25];
	printf("entre la chaine1\n");
	scanf("%s",chaine1);

	printf("la chaine1 avant\n");
	printf("la chaine2 avant\n");
	strcpy(chaine2, chaine1);
	printf("la chaine1 avant:%s\n",chaine1);
	printf("la chaine2 avant:%s\n",chaine2);
	return 0;
}
