#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int note;

	printf("Veuillez saisir VOTRE NOTE:\n");
	scanf("%d", &note);
	
	if(note < 7)
		printf("Non valide\n");
	else if(note < 10)
		printf("Rattrapage\n");
	else if(note < 12)
		printf("Passable\n");
	else if(note < 14)
		printf("Assez bien\n");
	else if(note < 16)
		printf("Bien\n");
	else if(note < 18)
		printf("Tres bien\n");
	else 
		printf("Excellent\n");
	
	getch();
	return 0;
}
