#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 100

int* range(int t[], int n){
	int *r = (int*)malloc(n*sizeof(int));
	int i, j;
	for ( i = 0; i < n; ++i)
	{
		int cpt = 0;
		for ( j = 0; j < n; ++j)
		{
			if(t[j] < t[i]) cpt++;
		}
		r[i] = cpt;
	}
return r;
}

int* tri(int t[], int r[], int n){
	int *tt = (int*)malloc(n*sizeof(int));
	int i, pos;
	for (i = 0; i < n; ++i)
	{
		pos = r[i]; // la position final de t[i] dans tt
		tt[pos] = t[i];
	}
return tt;
}
void initTab(int t[],int n){
	int i;
     for(i = 0; i < n; i++)
     { 
     	printf("donner t[%d] = ",i);
        scanf("%d",&t[i]);
	 }
}
	
void afficherTab(int t[],int n)
{   int i;
    for(i=0;i<n;i++)
       printf("%d\t",t[i]);
    printf("\n");
}

/***************** EXO2 ************/
void imprime(int g[][MAX], int n){
	int i, j;
    for(i = 0; i < n; i++)
     { 
     	for ( j = 0; j < n; ++j)
     	{
        	printf("%d ", g[i][j]);
     	}
     	printf("\n");
	 }
	 printf("\nFIN\n");
}

void configInit(int g[][MAX], int n){
	int i, j;
    for(i = 0; i <= n+1; i++)
     { 
     	for ( j = 0; j <= n+1; ++j)
     	{
        	if( i == 0 || j == 0 || i == n+1 || j == n+1) g[i][j] = 0;
        	else g[i][j] = rand()%2;
     	}
	 }
}

int nbVoisins(int g[][MAX], int i, int j){
	int nb = 0;
	if(g[i-1][j]) nb++;
	if(g[i+1][j]) nb++;
	if(g[i][j-1]) nb++;
	if(g[i][j+1]) nb++;
return nb;
}


int estVivant(int g[][MAX], int i, int j){
    int voisin = nbVoisins(g, i, j);
    if(voisin == 0 || voisin == 4) return 0;
    if(voisin == 2 || voisin == 3) return 1;
    return g[i][j];
}
void changeEtat(int g[][MAX], int n){
    int i, j;
    for(i = 1; i <= n ; i++){
        for(j = 1; j <= n ; j++){
            g[i][j] = estVivant(g, i, j);
        }
    }
}


int main(){

	int t[8];
	initTab(t, 8);
	afficherTab(t, 8);
	int *r = range(t,8);
	afficherTab(r, 8);
	int *tabTrie = tri(t, r , 8);
	afficherTab(tabTrie, 8);
	/***************** EXO2 ************/
	int cellule[MAX][MAX];
	configInit(cellule, 4);
	imprime(cellule, 6); // taile + 2 [2 pour les bordeurs]
	changeEtat(cellule, 4);
	imprime(cellule, 6);
	return 0 ;
}

/*
printf("Saisir nb: \n");
	scanf("%d", &nb);
	printf("Saisir size: \n");
	scanf("%d", &size);
for (i = 0; i < nb; ++i)
	{
		scanf("%s", tab[i]);
	}

	for ( i = 0; i < size; ++i)
	{
		for (j = 0; j < size; ++j)
		{
			printf("Saisir mat[%d][%d] :\n", i, j);
			scanf("%c", &mat[i][j]);
		}
	}
*/
