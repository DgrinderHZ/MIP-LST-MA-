void imprime(int g[][MAX], int n){
    printf("\n imprime...\n");
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

int Rand(){
    return rand()%2;
}

void configInit(int g[][MAX], int n){
    printf("\n configInit...\n");
	int i, j;
    for(i = 0; i <= n+1; i++)
     {
     	for ( j = 0; j <= n+1; ++j)
     	{
        	if( i == 0 || j == 0 || i == n+1 || j == n+1) g[i][j] = 0; /// valeurs ajoutées au bord
        	else g[i][j] = Rand(); /// 1 ou 0
     	}
	 }
}

int nbVoisins(int g[][MAX], int i, int j){
	int nb;
	nb = g[i-1][j]+ g[i+1][j] + g[i][j-1] + g[i][j+1];
return nb;
}


int estVivant(int g[][MAX], int i, int j){
    int voisin = nbVoisins(g, i, j);
    if(voisin == 0 || voisin == 4) return 0;
    if(voisin == 2 || voisin == 3) return 1;
    return g[i][j];
}
void changeEtat(int g[][MAX], int n){
    printf("\n changeEtat...\n");
    int i, j;
    for(i = 1; i <= n ; i++){
        for(j = 1; j <= n ; j++){
            g[i][j] = estVivant(g, i, j);
        }
    }
    printf("L'etat a etait change avec succes...\n");
}

