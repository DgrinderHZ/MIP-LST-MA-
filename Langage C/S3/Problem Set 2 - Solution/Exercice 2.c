#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int n; // la dimension de tableau
	int *tab = NULL;
	int i, x;

	printf("Saisir la dimension n :\n");
	scanf("%d", &n);

	//Allocation dynamique
	tab = (int*)malloc(n*sizeof(int));
	
	// Saisie de tab
	printf("\n********* Saisir les elements de tab ********\n");
	for(i = 0; i < n; i++){
		printf("tab[%d]= ", i);
		scanf("%d", &tab[i]);
	}
	
	printf("Saisir le nombre X a supprimer: \n");
	scanf("%d", &x);

	// on calcul le nombre d'occurrence
	int cpt = 0, k = 0;
	for(i = 0; i < n; i++){
		if(tab[i] == x) cpt++;
	}
	// on itoduit un tableau d'aide
	int *newtab = (int*)malloc((n-cpt)*sizeof(int));
	for(i = 0; i < n; i++){
		if(tab[i] == x) continue;
		else{
			newtab[k] = tab[i];
			k++;
					}
	}
	
	free(tab);
	tab = newtab;
	
	printf("********* tab apres traitement ********\n");
	for(i=0; i<n-cpt; i++){
		printf("%d\t", tab[i]);
	}
	
	getch();
	return 0;
}
