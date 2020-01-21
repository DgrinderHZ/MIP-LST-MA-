#include <stdio.h>

int main ()
{
  int m, n, i, temp;
  printf("Saisir un nombre\n");
  scanf("%d",&m);
  for(n = 1 ; n <= m ; n++){
  	int compteur = 0;
  
	  for(i = 2; i < n ; i++){
	  	if( n % i == 0){
	  		compteur++;
	  		break;
		  }
	  }
	  
	  if(compteur == 0){
	  	temp = n;
	  	printf("%d ", n);
	  	do{
		  temp = temp/10; 
		  compteur = 0;
		  for(i = 2; i < temp ; i++){
		  	if( temp % i == 0){
		  		compteur++;
		  		break;
			  }
		  }	
		  if(compteur == 0)
		  	continue;
		  else
		  	break;
		}while(temp != 0 );
		
		if(temp == 0){
			printf("super premier\n");
		}else{
			printf("\n");
		}
	  }
  }
  return 0;
}



