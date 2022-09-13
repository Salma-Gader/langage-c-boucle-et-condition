
#include <stdio.h>
#include <stdbool.h> 
bool is_leap_year(int year){
    
    bool is_leap_year =false;
    
    if(year%4!=0){
    	is_leap_year=true;
	}
        if((year%4==0)&&(year%100!=0)){
		
       is_leap_year=true;
    }
    return is_leap_year ;
}
    

int main() {
    int year;
    
    printf("entrer une annee entre 1800 et 10000.\n");
    scanf("%d",&year);
    
    if(is_leap_year(year)==true){
        printf("l'annee est bissextile");
    }else{
        printf("l' annee est non bissextile ");
    }
    return 0;
}
