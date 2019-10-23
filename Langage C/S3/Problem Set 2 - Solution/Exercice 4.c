#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int n; // la dimension de tablea
	int *tab=NULL;
	int i;
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
	
	int *p;
	printf("\n********* Order Croissant ********\n");
	for(p = tab; p != &tab[n] ; p++){
		printf("%d\t", *p);
	}
	
	printf("\n********* Order Decroissant ********\n");
	for(p = &tab[n-1]; p != tab-1 ; p--){
		printf("%d\t", *p);
	}
	
	getch();
	return 0;
}
