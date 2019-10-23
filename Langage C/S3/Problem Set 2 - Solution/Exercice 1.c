#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int n, m; // les dimensions des tableaux
	int *tab1=NULL, *tab2=NULL;
	int i;

	printf("Saisir les dimension; n puis m :\n");
	scanf("%d%d", &n, &m);

	//Allocation dynamique
	tab1 = (int*)malloc(n*sizeof(int));
	tab2 = (int*)malloc((n+m)*sizeof(int));
	
	// Saisie de tab1
	printf("\n********* Saisir les elements de tab1 ********\n");
	for(i = 0; i < n; i++){
		printf("tab[%d]= ", i);
		scanf("%d", &tab1[i]);
	}

	// Saisie de tab2
	printf("\n********* Saisir les elements de tab2 ********\n");
	for(i = 0; i < m; i++){
		printf("tab[%d]= ", i);
		scanf("%d", &tab2[i]);
	}

	// Traitement: on ajoute les éléments de tab1 à la fin de tab2
	int k = 0;
	for(i=n; i<n+m; i++){
		tab2[i] = tab1[k];
		k++;
	}
	
	printf("********* tab2 apres traitement ********\n");
	for(i=0; i<n+m; i++){
		printf("%d\t", tab2[i]);
	}
	
	getch();
	return 0;
}
