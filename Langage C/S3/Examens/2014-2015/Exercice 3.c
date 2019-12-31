/***************** EXO3 ************/
char** newStringArray(int nb){
    char** tab = (char**)malloc(nb*sizeof(char*));
    int i;
    for(i = 0; i < nb ; i++)
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

void printMatrix(char **mat, int size){
    int i, j;
    for(i = 0; i < size ; i++){
        for(j = 0; j < size ; j++){
            printf("%c ", mat[i][j]);
        }
        printf("\n");
    }
printf("\n__________FIN printMatrix_______\n");
}


Indices lineIndice(char **mat, int size, int line, char mot[]){
    int i, j;
    int trouver, deb, fin;
    Indices res = {-1, -1};
    for(i = 0; i < size ; i++){
        if(mat[line][i] == mot[0]){
            trouver = 1;
            deb = i;
            fin = i;
            for(j = 1; i+j < size && mot[j] != '\0' && mat[line][i+j] == mot[j] ; j++){
                trouver++;
                fin++;
            }
        }

        if(trouver == strlen(mot)){
            res.deb = deb;
            res.fin = fin;
        }
    }
return res;
}

void copierMatrice(char **mat, char **matTemp, int size){
    int i, j;
    for(i = 0; i < size ; i++){
        for(j = 0; j < size ; j++){
            matTemp[i][j] = mat[i][j];
        }
    }
}

void barrerLine(char **mat, int size, int line, Indices ind){
    int i;
    for(i = ind.deb; i <= ind.fin ; i++){
        mat[line][i] = '#';
    }
}

void solve(char **mat, int size, char **tab, int nb){
    int  line, col, mot;
    char **matTemp = newCharMatrix(size); /// g2
    copierMatrice(mat, matTemp, size);

    for(mot = 0; mot < nb ; mot++){ /// FIXER UN MOT        WORD
        for(line = 0; line < size ; line++){
            Indices ind = lineIndice(mat, size, line, tab[mot]);
            if(ind.deb == -1 && ind.fin == -1) continue;
            else{
                barrerLine(matTemp, size, line , ind);
                puts(tab[mot]); /// Afficher le mot rayer
            }
        }

        /// partie bonus
        for(col = 0; col < size ; col++){ /// vérifier les colonnes
            Indices ind = colIndice(mat, size, col, tab[mot]);
            if(ind.deb == -1 && ind.fin == -1) continue;
            else{
                barrerColonne(matTemp, size, col , ind);
                puts(tab[mot]); /// Afficher le mot rayer
            }
        }
        /// fin partie bonus
    }

    printMatrix(matTemp, size);
}


/// Fonctions bonus
void barrerColonne(char **mat, int size, int colonne, Indices ind){
    int i;
    for(i = ind.deb; i <= ind.fin ; i++){
        mat[i][colonne] = '#';
    }
}

Indices colIndice(char **mat, int size, int col, char mot[]){
    int i, j;
    int trouver, deb, fin;
    Indices res = {-1, -1};
    for(i = 0; i < size ; i++){
        if(mat[i][col] == mot[0]){
            trouver = 1;
            deb = i;
            fin = i;
            for(j = 1; i+j < size && mot[j] != '\0' && mat[i+j][col] == mot[j] ; j++){
                trouver++;
                fin++;
            }
        }

        if(trouver == strlen(mot)){
            res.deb = deb;
            res.fin = fin;
        }
    }
return res;
}
