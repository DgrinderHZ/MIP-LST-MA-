#include <stdio.h>

int main ()
{
  int total = 0;
	int somPositif = 0, somNegatif = 0;
    int n;
    do{
        printf("Donner un nombre entier: ");
        scanf("%d", &n);
        if(n > 0)
        	somPositif += n;
        else
        	somNegatif += n;
        total += n;
        printf("*** positifs = %d negatif = %d total = %d ***\n", somPositif, somNegatif, total);
    }while(somPositif + somNegatif != 0);
    
  return 0;
}



