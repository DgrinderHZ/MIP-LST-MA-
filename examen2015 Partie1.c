#include <stdlib.h>
#include <stdio.h>

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
