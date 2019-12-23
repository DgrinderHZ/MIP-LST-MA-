// 1)
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

// 2)
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
