#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){

	int heure, salaire;
	float montant = 0;

	printf("Veuillez saisir le nombre des heures de travail: ");
	scanf("%d", &heure);

	printf("Veuillez saisir votre salaire: ");
	scanf("%d", &salaire);

	if(heure <= 39) montant += 0;
	else if(heure <= 44) montant += (heure-40+1)*0.5*salaire;
	else if(heure <= 49) montant += 5*0.5*salaire + (heure-45+1)*0.75*salaire;
	else if(heure <= 50) montant += 5*0.5*salaire + 5*0.75*salaire + (heure-50+1)*salaire;
	
	printf("Le montant est: %f\n", montant);
	
	getch();
	return 0;
}
