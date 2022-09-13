
#include <stdio.h>
#include <stdbool.h> 
bool isPremier(int num1 ,int num2){
    int result=num1/num2;
    bool premier=true;
    
    for(int i =2;i< result;i++){
        if(result%i==0)
        premier=false;
    }
    return premier;
}
    

int main() {
    int num1,num2;
    
    printf("entrer le premier nombrer\n");
    scanf("%d",&num1);
    printf("entrer le premier nombrer\n");
    scanf("%d",&num2);
    if(isPremier(num1,num2)==true){
        printf("le resultat est premier");
    }else{
        printf("le resultat est pas premier");
    }
    return 0;
}
