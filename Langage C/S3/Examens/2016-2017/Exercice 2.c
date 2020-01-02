#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

/***** exo 2 *****/
typedef struct{
    char balise[MAX][20]; /// MAX balises de taille max 20
    int n; /// nombre de balises
}Html;

void add(Html *code, char balise[]){
    if(code->n < MAX){
        strcpy(code->balise[code->n], balise);
        (code->n)++;
    }else{
        printf("Exception! le tableau de balises est plein!\n");
    }
}


/// html body p s  |  s p body html
///   0   1   2 3  |  4 5 6    7
int analyseurHtml(Html *code){
    int valide = 1; /// vrai
    /// la i-ieme balise (ouvrante) doit étre identique
    /// avec la (n-i-1)-ieme balise (fermante)
    int i;
    for(i = 0; i < code->n; i++){
        /// vérifier si l'ordre des balises est
        /// respecté
        if(strcmp(code->balise[i], code->balise[code->n -i-1]) != 0){
            valide = 0; /// faux
            break;
        }
    }
return valide;
}

void afficheHtml(Html *code){
    int i;
    for(i = 0; i < code->n; i++){
        /// vérifier si l'ordre des balises est
        /// respecté
        if((i+1) <= code->n/2){
            int j;
            for(j = 0; j < i; j++){
                printf("\t");
            }
            printf("<%s>\n", code->balise[i]);
        }else{
            int j;
            for(j = i; j < code->n-1; j++){
                printf("\t",code->n);
            }
            printf("</%s>\n", code->balise[i]);
        }
    }
}

/***** exo 3 *****/

int main()
{
    /***** exo 2 *****/
    Html code;
    code.n = 0;
    add(&code, "html");
    add(&code, "body");
    add(&code, "p");
    add(&code, "p");
    add(&code, "body");
    add(&code, "html");
    printf("%d\n", analyseurHtml(&code));
    printf("______________________Arbre HTML______________________\n");
    afficheHtml(&code);

    /***** exo 3 *****/
    return 0;
}
