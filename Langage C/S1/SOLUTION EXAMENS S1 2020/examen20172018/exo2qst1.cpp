#include <bits/stdc++.h>

int main ()
{
  int n, i;
  printf("Saisir un nombre\n");
  scanf("%d",&n);
  int compteur = 0;
  for(i = 2; i < n ; i++){
  	if( n % i == 0){
  		compteur++;
  		break;
	  }
  }
  if(compteur == 0){
  	printf("%d est premier\n", n);
  }else{
  	printf("%d est non premier\n", n);
  }
  return 0;
}



