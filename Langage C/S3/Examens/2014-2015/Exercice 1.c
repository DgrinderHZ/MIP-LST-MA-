// 1)
int* range(int t[], int n){
	/* Prend un tableau t et sa longueur n en paramètres
	   et retourne un tableau r tel que r[i] compte le 
	   nombre de t[j] inférieur à t[i]!
	   */
	int *r = (int*)malloc(n*sizeof(int)); // allocation dynamique
	int i, j;
	for ( i = 0; i < n; ++i) // fixer t[i]
	{
		int cpt = 0; // compter combien de t[j] < t[i]
		for ( j = 0; j < n; ++j) 
		{
			if(t[j] < t[i]) cpt++;
		}
		r[i] = cpt;
	}
return r;
}

// 2)
int* tri(int t[], int r[], int n){
	/* Prend deux tableau t et r avec leur longueur n en paramètres
	   et retourne un tableau tt représentant la version triée
	   de t!
	   */
	int *tt = (int*)malloc(n*sizeof(int));
	int i, pos;
	for (i = 0; i < n; ++i)
	{
		pos = r[i]; // la position final de t[i] dans tt
		tt[pos] = t[i];
	}
return tt;
}
