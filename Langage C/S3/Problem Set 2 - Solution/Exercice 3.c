#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int n; // la dimension de tableau
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
	
	// tri
	int *p1, *p2, aide;
	for(p1 = tab; p1 != &tab[n-1] ; p1++){
		for(p2 = p1 + 1; p2 != &tab[n] ; p2++){
			if( *p1 < *p2){
				aide = *p1;
				*p1 = *p2;
				*p2 = aide;
			}
		}
	}
	
	printf("\n********* tab apres traitement ********\n");
	int *p;
	for(p = tab; p != &tab[n] ; p++){
		printf("%d\t", *p);
	}
	
	getch();
	return 0;
}
