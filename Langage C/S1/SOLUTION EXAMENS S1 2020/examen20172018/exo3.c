#include <stdio.h>

int main ()
{
  int n, i, j;
  printf("Nombre de lignes: \n");
  scanf("%d",&n);
  int nEspace, nEtoile;
  for(i = 0; i < n-1 ; i++){
  	nEspace = n - i - 2;
  	for(j = 0; j < nEspace; j++)
  		printf(" ");
  	nEtoile = i*2+1;
  	for(j = 0; j < nEtoile; j++){
  		if(j == 0 || j == nEtoile -1 || i == n-2)
  			printf("*");
  		else
  			printf("+");
	  }
  	printf("\n");
  }
  return 0;
}



