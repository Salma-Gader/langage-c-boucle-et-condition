#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
void printIntro(){
    printf("Bienvenue a notre evenement principal, les fans de course numerique !\nJ'espere que tout le monde a pris son gouter car nous allons commencer !\n"); 
 }
 
void printCountDown(){
    printf("Coureurs prets ! Dans...");
    int i;
    for( i=5;i>=1;i--){
        sleep(1);
        printf("\n %d",i);
        sleep(1);
    }
   
    printf("\ncourse!");
 }
 
 
 
struct Race{
    int numberOfLaps;
    int currentLap;
    char firstPlaceDriverName [20];
    char firstPlaceRaceCarColor [20];
};


struct RaceCar{
    char driverName[20];
    char raceCarColor[20];
    int totalLapTime;
};

 void printFirstPlaceAfterLap(struct Race race){
    printf("Apres le tour numero%d\nLa premiere place est occupee par :%s la voiture de course%s !\n",race.currentLap,race.firstPlaceDriverName,race.firstPlaceRaceCarColor);
 } 
 void printCongratulation(struct Race race){
 	printf("Felicitons tous %s, dans la voiture de course %s pour son incroyable performance.C'etait vraiment une belle course et bonne nuit a tous !",race.firstPlaceDriverName,race.firstPlaceRaceCarColor );
 }
 int calculateTimeToCompleteLap(){
 int vitesse,acceleration,nerves;
  vitesse=(rand()%(3-1+1)+1);
  acceleration=(rand()%(3-1+1)+1);
  nerves=(rand()%(3-1+1)+1);
 int result=vitesse+acceleration+nerves;
 printf("%d",result);
 return result;
 }
int main() {
	 printIntro();
     printCountDown();
     struct Race race = {1,2,"Samir","blanche"};
     printFirstPlaceAfterLap(race);
     struct Race race = {1,2,"Amin","noire"};
     printCongratulation(race);
     calculateTimeToCompleteLap();
	 return 0;
}
