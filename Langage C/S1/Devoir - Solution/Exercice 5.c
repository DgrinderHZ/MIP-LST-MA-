//realise par BuenoZekk le 10/01/2016 23:36
//Exercice 3 - Devoir -FST Errachidia
//If you want to succed than be phenomenal !!!!!!!&
#include<stdio.h>
#include<conio.h>
int main()
{ 
	int n,temp; // temp : pour garder la valeur de n a la fin
	int i=0; // compteur
	printf("Donnez un nombre entier\n");
	scanf("%d",&n);
	temp=n;
	do
	{
	  temp=temp/10; // ou bien temp/=10;  
	  i++;	
	}while(temp!=0);
	printf("Le nombre %d a %d chiffres",n,i);
	getch();
	return 0;
}
