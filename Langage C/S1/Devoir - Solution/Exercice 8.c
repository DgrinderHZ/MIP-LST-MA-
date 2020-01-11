//realise par BuenoZekk le 11/01/2016 00:54
//Exercice 8 - Devoir -FST Errachidia
//Le succes,C'est une question de volonte !!!!!!!
#include<stdio.h>
#include<conio.h>
int main()
{ 
	int note;
	do{ 
		/*
	     la boucle do-while 
	     est pour tester la validite de la note */
		  printf("Donnez la note du module: ");
		  scanf("%d",&note);
	}while(note<0||note>20);
	
	if(note>=10)
		printf("l\'etudiant valide lu module");
	else if(note>=7)
	    printf("l\'etudiant passe la session de rattrapage");
	else
	    printf("NV (Nouvelle Voiture! Mebrooook 3liiihh!)");
	getch();
	return 0;
}
