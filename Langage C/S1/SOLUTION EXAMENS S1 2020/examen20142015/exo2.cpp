#include <bits/stdc++.h>

int main ()
{
  /**< exo 2 */
    int n, i;
    float x, t, s;
    printf("Saisir N et X : ");
    scanf("%d%f", &n, &x);
    /** Avec While */
    s = 0; t = 1; i = 1;
    while(i <= n){
        t = t * x * x;
        s = s + t / i;
        i++;
    }
    printf("Voila le resultats : %f\n", s);
    /*************************************/
    /** Avec Pour */
    s = 0; t = 1;
    for(i = 1; i <= n; i++){
        t = t * x * x;
        s = s + t / i;
    }
    printf("Voila le resultats avec for: %f\n", s);
    /*************************************/
    /** Algorithme proposée */
    s = 0; t = 1;
    for(i = 2; (i/2) <= n; i += 2){
        s += pow(x,i)/(i/2);
    }
    printf("Voila le resultats avec for: %f\n", s);
  return 0;
}



