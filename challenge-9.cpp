
#include <stdio.h>
#include <stdbool.h> 
bool isPremier(int num){
    
    bool premier=true;
    
    for(int i =2;i< num;i++){
        if(num%i==0)
        premier=false;
    }
    return premier;
}
    

int main() {
    int num;
    
    printf("entrer un nombrer");
    scanf("%d",&num);
    if(isPremier(num)==true){
        printf("le nomber est premier");
    }else{
        printf("le nomber est pas premier");
    }
    return 0;
}
