#include <stdlib.h>
#include <stdio.h>
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
}

void configinit(int g[][MAX], int n){
	int i, j;
    for(i = 0; i <= n+1; i++)
     { 
     	for ( j = 0; j <= n+1; ++j)
     	{
        	if( i == 0 || j == 0 || i == n+1 || j == n+1) g[i][j] = 0;
        	else g[i][j] = rand();
     	}
	 }
}

int nbVoisins(int g[][MAX], int n, int i, int j){
	int nb = 0;
	if(g[i-1][j]) nb++;
	if(g[i+1][j]) nb++;
	if(g[i][j-1]) nb++;
	if(g[i][j+1]) nb++;
return nb;
}


int estVivant(int g[][], int n, int i, int j){
    int voisin = nbVoisin(g, n, i, j);
    if(voisin == 0 || voisin == 4) return 0;
    if(voisin == 2 || voisin == 3) return 0;
    return g[i][j];
}
void changeEtat(int g[][], int n){
    int i, j;
    for(i = 1; i <= n ; i++){
        for(j = 1; j <= n ; j++){
            g[i][j] = estVivant(g, n, i, j);
        }
    }
}

char** newStringArray(int nb){
    char** tab = (char**)malloc(nb*sizeof(char*));
    int i;
    for(i = 0 ; i < nb ; i++)
        tab[i] = (char*)malloc(MAX*sizeof(char));
return tab;
}

char** newCharMatrix(int size){
    char** mat = (char**)malloc(size*sizeof(char*));
    int i;
    for(i = 0 ; i < size ; i++)
        mat[i] = (char*)malloc(size*sizeof(char));
return mat;
}

void printMatrix(int mat[][], int size){
    int i, j;
    for(i = 0; i < size ; i++){
        for(j = 0; j < size ; j++){
            printf("%c ", mat[i][j]);
        }
        printf("\n");
    }
}

typedef struct indice{
    int deb;
    int fin;
}Indices;

Indices lineIndice(int mat[][], int size, int line, char mot[]){
    int i, j;
    int trouver = 0, deb = -1, fin = -1;
    Indices res;
    for(i = 0; i < size ; i++){
        if(mat[line][i] == mot[0]){
            trouver = 1;
            deb = i;
            for(j = 1; j < size && mat[line][i+j] == mot[j] ; j++){
                trouver++;
                fin = i+j;
            }
        }
        if(trouver){
            res.deb = deb;
            res.fin = fin;
        }
    }
return res;
}

void solve(int mat[][], int size){
    int i, j;
    for(i = 0; i < size ; i++){
        for(j = 0; j < size ; j++){
            printf("%c ", mat[i][j]);
        }
        printf("\n");
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
	return 0 ;
}
