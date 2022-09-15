#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void printIntro(){
	printf("Bienvenue a notre evenement principal, les fans de course numerique !\nJ'espere que tout le monde a pris son gouter car nous allons commencer!\n");
}
void printCountDown(){
	printf("Coureurs prêts ! Dans...\n5\n4\n3\n2\n1\nCourse !");
}
void printFirstPlaceAfterLap( Race race){
	Race={0,2,Mohssin,blanche};
	printf("Après le tour numéro %d\nLa première place est occupée par : %s dans la voiture de course %s !",Race.urrentLap,Race.firstPlaceDriverName,Race.firstPlaceRaceCarColor);
	
} 
struct Race {
int numberOfLaps; 
int currentLap;
char firstPlaceDriverName[20];
char firstPlaceRaceCarColor[20];
};
	
struct RaceCar{
char driverName[20];
char raceCarColor[20];
int totalLapTime;
};
int main() {
	printIntro();
	printCountDown();
	return 0;
}
