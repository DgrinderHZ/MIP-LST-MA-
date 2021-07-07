![image](image.png)

▶🎦💚[Video YouTube](https://www.youtube.com/c/ZeekZoneHZ/videos)
## La fonction main
```c 
#include <stdio.h>
#include <stdlib.h>
#include "liste.h"
int main()
{
    // Exercice 1
    /*

    1. Variable de type adresse, destiner à stocker des
    adresses memoire;
    2. La loi FIFO (First In First Out);
    3. La fonction calloc initialize les cases à zero;
    4. Non, la taille est fixer au moment de compilation;
    5. La fonction reserve un espace memoire sizeof(int)*10 octets
    6.
          SDL            |      SDNL
    --------------------------------------------
     Tous sont SDL       |      ...

    */
    // Exercice 2
    printf("__________Creation de la liste ......\n");
    Liste *maListe = CreerListe();
    printf("\n__________Construction de la liste ......\n");
    ConstruireListe(maListe);
    printf("\n__________Affichage de la liste ......\n");
    AfficherListe(maListe);
    printf("\n__________Suppression de dernier voiture dans la liste ......\n");
    printf("Reference de la voiture supprimee a la fin: %d\n", SupprimerListeFin(maListe));
    printf("\n__________Affichage de la liste ......\n");
    AfficherListe(maListe);

    return 0;
}
```

## Le fichier liste.h
```c
#ifndef H_LISTE
#define H_LISTE

typedef struct el
{
	int RefVoiture;
	char MrqVoiture[31];
	int KlmVoiture;;
	struct el *suivant;
}Element;

typedef struct liste
{
	Element *tete;
	Element *queue;
	int taille;
}Liste;

Element* CreerElement();

Liste* CreerListe();

void AjouterListe(Liste *li, int ref, char* mrq, int klm);

void ConstruireListe(Liste *li);

void AfficherListe(Liste *li);

int SupprimerListeFin(Liste* li);

int NbVoiture(Liste* li);

#endif

```

## Le fichier liste.c
```c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "liste.h"

Element* CreerElement(){
	Element *m = (Element*)malloc(sizeof(Element));
	if(!m){
		printf("Erreur d'allocation - CreerElement()");
		exit(-1);
	}
	else{
		m->RefVoiture = 0;
		strcpy(m->MrqVoiture,"");
		m->KlmVoiture = 0.0;
		m->suivant = NULL;
	}
	return m;
}

Liste* CreerListe(){
	Liste *li=(Liste*)malloc(sizeof(Liste));
	if(!li){
		printf("Erreur d'allocation - CreerListe()");
		exit(-1);
	}
	else{
		li->tete = NULL;
		li->queue = NULL;
		li->taille = 0;
	}
	return li;
}

void AjouterListe(Liste *li, int ref, char* mrq, int klm){
	Element *m, *courant, *pred;
	m = CreerElement();

	m->RefVoiture = ref;
    strcpy(m->MrqVoiture,mrq);
    m->KlmVoiture = klm;

    // cas: liste vide
	if(li->taille == 0){
		li->tete = m;
		li->queue = m;
	}
	else{ // cas: liste non vide

		if(m->RefVoiture < li->tete->RefVoiture)
		{   // Ajoute debut car la reference est inferieur par
		    // rapport au debut
			m->suivant = li->tete; // 1
			li->tete = m; // 2
		}
		else if(li->queue->RefVoiture  <  m->RefVoiture){
            // Ajoute fin car la reference est superieur
            // par rapport a la fin
			li->queue->suivant = m; // 1
			li->queue = m; // 2
		}
		else{
            // Ajout millieu car la reference est superieur
            // par rapport au debut et inferieur par rapport a la fin

			// etape de deplacement vers le bon endroit
			courant = li->tete;
			pred = NULL;
			while(courant->RefVoiture < m->RefVoiture){
				pred = courant;
				courant = courant->suivant;
			}
            // branchement (mise à jours)
			m->suivant = courant; // 1
			pred->suivant = m; // 2
		}
	}
	// Incrementer le nombre d'elements
    li->taille++;
}

void ConstruireListe(Liste *li){
	int n;// nombre de voiture
	int i;
	// saisir le nombre de voiture
	do{
		printf("Donner le nombre des etudiants:\n");
		scanf("%d",&n);
	}while(n <= 0);

	for (i = 1; i <= n; i++)
	{
		int ref, klm;
		char mrq[31];
		printf("Taper les informations de la voiture Num. %d:\n",i );
		printf("Refernce: "); scanf("%d",&ref);
		printf("Marque (30 caractères max): "); scanf("%s",mrq);
		printf("Kilometrage: "); scanf("%d",&klm);

		/* Appel à la fonction AjouterListe */
		AjouterListe(li, ref, mrq, klm);
	}


}

void AfficherListe(Liste *li){
	Element *cur = li->tete;
	int i = 1;
	while(cur!=NULL){
		printf("Informations de la voiture Num. %d:\n",i );
		printf("Reference: %d\t Marque: %s\t Kilometrage: %d\n", cur->RefVoiture,
				cur->MrqVoiture, cur->KlmVoiture);
		cur = cur->suivant;
		i++;
	}
}

int SupprimerListeFin(Liste *li)
{
    int ref;
    Element *pred, *courant;
    if (li->taille == 0){
        printf(" impossible de supprimer dans liste vide\n");
        exit(EXIT_FAILURE);
    }else{
        courant = li->tete;
        pred = NULL;
        // On se deplace vers le derenier element
        while ( courant->suivant != NULL){
            pred = courant ;
            courant = courant->suivant;
        }
        ref = courant->RefVoiture;

        li->queue = pred;
        if (pred != NULL) // taille > 1
            pred->suivant = NULL;
        else // la liste est de taille == 1
            li->tete = NULL;

        li->taille--;
        free(courant);
    }
return ref;
}

int NbVoiture(Liste* li){
	return li->taille;
}

```
