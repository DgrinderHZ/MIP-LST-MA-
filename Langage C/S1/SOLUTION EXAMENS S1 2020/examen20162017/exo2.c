#include <stdio.h>

int main ()
{
  int totalNul = 0;
	int totalPositif = 0, totalNegatif = 0;
    int n, i;

    for(i = 0 ; i < 20 ; i++){
        printf("Donner un nombre entier: ");
        scanf("%d", &n);
        if(n > 0)
        	totalPositif++;
        else if( n < 0)
        	totalNegatif++;
        else
            totalNul++;  
    } 

    printf("*** total :\npositifs = %d negatifs = %d nuls = %d ***\n", totalPositif, totalNegatif, totalNul);
  return 0;
}



