#include <bits/stdc++.h>

int main ()
{
  /**< exo 1 */
    int taille;
    char genre; // H/F
    float poids;
    printf("Saisir genre H ou F: "); 
	scanf("%c", &genre);
    printf("Saisir taille : "); 
	scanf("%d", &taille);
    printf("Saisir poids : "); 
	scanf("%f", &poids);
    float indice = poids / (taille*taille);
    if( genre == 'F'){
        if( indice > 23) printf("Vous devriez surveiller votre alimentation\n");
        else if( indice < 18) printf("Vous devriez prendre des forces\n");
        else printf("Vous etes a votre poids de forme\n");
    }else{
        if( indice > 25) printf("Vous devriez surveiller votre alimentation\n");
        else if( indice < 19) printf("Vous devriez prendre des forces\n");
        else printf("Vous etes a votre poids de forme\n");
    }

  return 0;
}



