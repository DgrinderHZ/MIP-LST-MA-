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
