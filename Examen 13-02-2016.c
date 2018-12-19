#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define MAX 100

void initTab2D(char t[][MAX], int n){
	int i, j;
    for(i = 0; i < n; i++)
     { 
     	for ( j = 0; j < n; ++j)
     	{
     		printf("Donner t[%d][%d] = ", i, j);
        	scanf("%d", &t[i][j]);
     	}
	 }
}

void afficherTab2D(int t[][MAX],int n)
{   int i, j;
    for(i = 0; i < n; i++)
     { 
     	for ( j = 0; j < n; ++j)
     	{
        	printf("%d ", t[i][j]);
     	}
     	printf("\n");
	 }
}

void exo1Qest3(int i, int j){
	int r;
	r = 1;
	while(j != 0){
		if(j % 2 == 0){
			i = i * i;
			j /= 2;
		}
		else{
			r *= i;
			j--;
		}
	}
	printf("%d\n", r);
}
void exo1Qest3bis(int i, int j){
	int res = 1;
	int k;
	for (k = 0; k < j; ++k)
	{
		res *= i;
	}
	printf("%d\n", res);
}

void g(char *t1, char *t2){
	char *pt1, *pt2;
	pt1 = t1;
	pt2 = t2;
	while( *pt2 != '\0'){
		*pt1 = *pt2;
		pt1++;
		pt2++;
	}
	*pt1 = '\0';
}

int suiteDeZero(int V[], int nb){
	/* cette fonction retourne le debut 
	de la plus long suite des zero dans V,
	-1 s'il n'y a pas des zÃ©ros */
	int debut = -1, i, longest = 0, cpt, j;
	for (i = 0; i < nb; ++i)
	{
		if (V[i] == 0)
		{   
			cpt = 1;
			for (j = i+1; (j < nb && V[j] == 0) ; ++j)
			{
				cpt++;
			}
			if(cpt > longest) {
				longest = cpt;
				debut = i; 
			}
		}
	}
return debut;
}

typedef struct reponse{
	char vraiOuFaux[5];
	int ligne;
	int colonne;
}Reponse;

Reponse verifieMatrice(char m[][MAX], int n){
	int i, j , k, idnentique;
	Reponse res = {"Faux", -1, -1}; // Faux par defaut
	/* pour chaque ligne on verifier s'il de colonne 
	  idnentique */
	for (i = 0; i < n; ++i)//on fixe la ligne
	{
		
		for ( j = 0; j < n; ++j) //on fixe la colonne
			{
				idnentique = 0;
				for ( k = 0; (k < n && m[i][k] == m[k][j]); ++k)
				{
					idnentique++;
				}
				// si on trouve le resultat
				if (idnentique == n)
				{
					strcpy(res.vraiOuFaux,"Vrai");
					res.ligne = i;
					res.colonne = j;
				}
			}
			
	}
return res;
}

float* ratio(int m[][MAX], int n){
	float *r = (float*)malloc(n*sizeof(float));
	float sumI, sumJ;
	int i, j;
	// sumI : abonnements
	// sumJ : abonnÃ©s
	for (i = 0; i < n; ++i)
	{   sumI = 0; sumJ = 0; 
		for ( j = 0; j < n; ++j)
		{
			// Les abonnÃ©s Ã  i
			if (m[i][j] == 1)
			{
				sumJ++;
			}
			// les abonnements de i
			if (m[j][i] == 1)
			{
				sumI++;
			}
		}

		r[i] = sumI/sumJ;
	}

return r;
}

void calculerNiveau(int a[][MAX], int n, int p){
	int i, j, k;
	for (i = 0; i < n; ++i)
	{   
		// On cherche un abonnÃ©
		for (j = 0; j < n; ++j)
		{   // une fois trouver! on va chercher ses abonnÃ©s
			if (a[i][j] == p)
			{ 
				for (k = 0; k < n; ++k)
				{
					if (a[j][k] == p)
					{
						a[i][k] = p+1;
					}
				}
			}
		}
	}
}

int main(int argc, char const *argv[])
{
	exo1Qest3(2,5); 
	exo1Qest3bis(2,5);
	char ch[] = "hhh", copieCetchaine[] = "Je vais reussir";
	g(ch, copieCetchaine);
	printf("\nvoici la chaine ch apres g(): %s\n", ch);

	int tabTest[] = {1,0,1,0,0,0,1,1,0,0,0,0,0,1,1,0,1,0,0};
	printf("Voici la position de la plus long suite: %d\n", suiteDeZero(tabTest, 19));
	char test[][100] = {{'W','K','R','U','J','E'},
					    {'A','P','E','T','J','E'},
					    {'W','A','W','L','J','E'},
					    {'R','E','I','W','W','F'},
					    {'W','A','W','M','K','E'},
					    {'M','G','F','R','J','E'}};
	Reponse r = verifieMatrice(test, 6);
	printf("%d %d %s\n", r.ligne, r.colonne, r.vraiOuFaux);

	int A[][MAX] = { {0, 1, 0, 0}, 
					 {0, 0, 1, 0}, 
				     {0, 0, 0, 1}, 
					 {0, 0, 0, 0} };
	calculerNiveau(A, 4, 1);
	afficherTab2D(A, 4);

	return 0;
}
