#include <bits/stdc++.h>
int main ()
{
    int T, j, i;
    printf("Saisir la taille: \n");
    scanf("%d",&T); 
    for(i = 0; i < T ; i++){
    	for(j = 0; j < T; j++){
    		if(i == 0 || i== T-1 || j == 0 || j== T-1)
    			printf("*");
    		else if(i == j || j == T-i-1)
    				printf("+");
    		else if(i == T/2)
    				printf("|");
            else if(j == T/2)
                    printf("-");
    		else
    			printf(" ");
		}
		printf("\n");
	}

  return 0;
}



