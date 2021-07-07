![image](amouch.png)

▶🎦💚[Video YouTube](https://www.youtube.com/c/ZeekZoneHZ/videos)
## La fonction main
```c
#include <stdio.h>
#include <stdlib.h>
#include "liste.h"
int main()
{
    Bibliotheque *b = CreerBibliotheque();
    AjouterCategorie(b, "Maths");
    AjouterCategorie(b, "PC");
    AjouterLivre(b, "Maths", "Analyse 3", "M. K. Belhadj");
    AjouterLivre(b, "Maths", "Analyse 4", "M. Mamouni");
    AfficherLivres(b, "Maths");
    AjouterLivre(b, "PC", "Analyse 4", "M. Mamouni");
    AfficherLivres(b, "PC");
    SupprimerCategorie(b, "PC");
    AfficherLivres(b, "PC");

    return 0;
}

```
## liste.h
```c
#ifndef H_LISTE
#define H_LISTE

typedef struct livre
{
	char titre[61];
	char auteur[61];
	struct livre *suivant;
}Livre;

typedef struct categorie
{
	char titre[51];
	int nbLivre;
	Livre *debut; // liste des livres
	struct categorie * suivant;
}Categorie;

typedef struct liste
{
	Categorie *tete;
	Categorie *queue;
	int taille;
}Bibliotheque;

Livre* CreerLivre();
Categorie* CreerCategorie();
Bibliotheque* CreerBibliotheque();

void AjouterCategorie(Bibliotheque *li, char* titre);

void AjouterLivre(Bibliotheque *li, char* titreCat, char* titreLiv, char* auteur);

void AfficherLivres(Bibliotheque *li, char* titreCat);

void SupprimerCategorie(Bibliotheque* li, char* titreCat);

int NbTotalDesLivres(Bibliotheque* li);

#endif

```
## liste.c
```c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "liste.h"

Livre* CreerLivre(){
	Livre *m = (Livre*)malloc(sizeof(Livre));
	if(!m){
		printf("Erreur d'allocation - CreerLivre()");
		exit(-1);
	}
	else{
		strcpy(m->titre,"");
		strcpy(m->auteur,"");
		m->suivant = NULL;
	}
	return m;
}

Categorie* CreerCategorie(){
	Categorie *m = (Categorie*)malloc(sizeof(Categorie));
	if(!m){
		printf("Erreur d'allocation - CreerCategorie()");
		exit(-1);
	}
	else{
		strcpy(m->titre,"");
		m->nbLivre = 0;
		m->debut = NULL;
		m->suivant = NULL;
	}
	return m;
}

Bibliotheque* CreerBibliotheque(){
	Bibliotheque *li=(Bibliotheque*)malloc(sizeof(Bibliotheque));
	if(!li){
		printf("Erreur d'allocation - CreerBibliotheque()");
		exit(-1);
	}
	else{
		li->tete = NULL;
		li->queue = NULL;
		li->taille = 0;
	}
	return li;
}



void AjouterCategorie(Bibliotheque *li, char* titre){
	Categorie *m;
	m = CreerCategorie();

    strcpy(m->titre, titre);

    // cas: liste vide
	if(li->taille == 0){
		li->tete = m; // 1
		li->queue = m; // 2
	}
	else{ // cas: liste non vide (ajout fin)
        li->queue->suivant = m; // 1
        li->queue = m; // 2
	}
	// Incrementer le nombre d'elements
    li->taille++;
}


void AjouterLivre(Bibliotheque *li, char* titreCat, char* titreLiv, char* auteur){
	Livre *m;
	m = CreerLivre();

    strcpy(m->titre, titreLiv);
    strcpy(m->auteur, auteur);

    // Deplacement vers categorie
    Categorie *cur;
    cur = li->tete;
    while(cur != NULL && strcmp(cur->titre, titreCat) != 0)
        cur = cur->suivant;
    // Categorie trouvée
    if(cur != NULL){
        // cas: liste vide
        if(cur->debut == NULL){
            cur->debut = m;
        }
        else{ // cas: liste non vide (ajout debut)
            m->suivant = cur->debut;// 1
            cur->debut = m; // 2
        }
        // Incrementer le nombre d'elements
        cur->nbLivre++;
    }else{
        printf("La categorie '%s' n'exist pas.\n", titreCat);
    }
}




void AfficherLivres(Bibliotheque *li, char* titreCat){
	Livre *livre;
    // Deplacement vers categorie
    Categorie * cur;
    cur = li->tete;
    while(cur != NULL && strcmp(cur->titre, titreCat) != 0)
        cur = cur->suivant;
    // Categorie trouvée
    if(cur != NULL){
        livre = cur->debut;
        int i = 1;
        while(livre != NULL){
            printf("Informations du livre Num. %d:\n",i );
            printf("\nTitre: %s\t Auteur: %s\n", livre->titre,
				livre->auteur);
            livre = livre->suivant;
        i++;
        }
    }else{
        printf("La categorie '%s' n'exist pas.\n", titreCat);
    }
}

int NbTotalDesLivres(Bibliotheque* li){
    int count = 0;
    Categorie *cur;
    cur = li->tete;
    while(cur != NULL){
        count += cur->nbLivre;
        cur = cur->suivant;
    }
}

void SupprimerCategorie(Bibliotheque* li, char* titreCat){
    Livre *livre, *livreSuivant;
    // Deplacement vers categorie
    Categorie *cur, *pred;
    cur = li->tete;
    pred=NULL;
    while(cur != NULL && strcmp(cur->titre, titreCat) != 0){
            pred = cur;
            cur = cur->suivant;
    }
    // Categorie trouvée
    if(cur != NULL){
        // suppression des livres
        livre = cur->debut;
        while(livre != NULL){
            livreSuivant = livre->suivant;
            free(livre);
            cur->nbLivre--;
            livre = livreSuivant;
        }

        // suppression categorie
        if(pred != NULL){
            pred->suivant = cur->suivant;
        }else{
            li->tete = cur->suivant;
        }

        free(cur);
        li->taille--;
    }else{
        printf("La categorie '%s' n'exist pas.\n", titreCat);
    }
}

```
