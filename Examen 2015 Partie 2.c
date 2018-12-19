#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 100

char** newStringArray(int nb){
    char** tab = (char**)malloc(nb*sizeof(char*));
    int i;
    for(i = 0 ; i < nb ; i++)
        tab[i] = (char*)malloc(MAX*sizeof(char));
return tab;
}

char** newCharMatrix(int size){
    char** mat = (char**)malloc(size*sizeof(char*));
    int i;
    for(i = 0 ; i < size ; i++)
        mat[i] = (char*)malloc(size*sizeof(char));
return mat;
}

void printMatrix(char mat[][MAX], int size){
    int i, j;
    for(i = 0; i < size ; i++){
        for(j = 0; j < size ; j++){
            printf("%c ", mat[i][j]);
        }
        printf("\n");
    }
printf("\nFIN\n");
}

typedef struct indice{
    int deb;
    int fin;
}Indices;

Indices lineIndice(char mat[][MAX], int size, int line, char mot[]){
    int i, j;
    int trouver, deb, fin;
    Indices res;
    for(i = 0; i < size ; i++){
        trouver = 0;
        if(mat[line][i] == mot[0]){
            trouver = 1;
            deb = i;
            fin = i;
            for(j = 1; j < size && mot[j] != '\0' && mat[line][i+j] == mot[j] ; j++){
                trouver++;
                fin++;
            }
        }
        if(trouver == strlen(mot)){
            res.deb = deb;
            res.fin = fin;
            return res;
        }
    }
}

void copierMatrice(char mat[][MAX], char matTemp[][MAX], int size){
    int i, j;
    for(i = 0; i < size ; i++){
        for(j = 0; j < size ; j++){
            matTemp[i][j] = mat[i][j];
        }
    }
}
void barrerLine(char mat[][MAX], int size, int line, Indices ind){
    int i;
    for(i = ind.deb; i <= ind.fin ; i++){
        mat[line][i] = '#';
    }
}

void solve(char mat[][MAX], int size, char tab[][MAX], int nb){
    int i, j, line, mot;
    char matTemp[MAX][MAX];
    copierMatrice(mat, matTemp, size);

    for(mot = 0; mot < nb ; mot++){
        for(line = 0; line < size ; line++){
            Indices ind = lineIndice(mat, size, line, tab[mot]);
            if(ind.deb == -1 && ind.fin == -1) continue;
            else barrerLine(matTemp, size, line , ind);
        }

    }

    printMatrix(matTemp, size);
}
int main(){
    /***************** EXO3 ************/
    
    int i,j;
    char mat[][MAX] = {{'x','m','o','t','s'},
                       {'t','e','a','a','i'},
                       {'a','r','b','r','e'},
                       {'p','o','r','t','s'},
                       {'m','e','r','a','i'},};
    char tab[][MAX] = {{'a','r','b','r','e','\0'},
                        {'m','e','r','\0'},
                        {'m','o','t','s','\0'}};
    
    printMatrix(mat, 5);
    solve(mat, 5, tab,  3);
    return 0 ;
}
