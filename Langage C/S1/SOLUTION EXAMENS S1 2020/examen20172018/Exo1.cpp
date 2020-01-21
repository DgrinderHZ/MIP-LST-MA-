#include <bits/stdc++.h>

int main ()
{
  int j, h;
  printf("Saisir le nombre de jour (0 - 6) :\n");
  scanf("%d", &j);
  printf("Saisir l\'heure (0-23)\n");
  scanf("%d", &h);
  
  switch(j){
  	case 0:
  		if(7 <= h && h <= 13){
		  	printf("Ouverte");
		}else{
		  	printf("Fermee");
		}
  		break;
  	case 1:
  		printf("Fermee");
  		break;
  	default:
  		if((7 <= h && h <= 13) ||(16 <= h && h <= 20)) {
		  	printf("Ouverte");
		}else{
		  	printf("Fermee");
		}
  }
  
  return 0;
}



