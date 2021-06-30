#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//#include "liste.c"

#include <stdio.h>
#include <stdlib.h>

typedef struct maillon{
    int val;
    struct maillon *suivant;
}Element;

typedef struct pile{
    Element *debut;
    int taille;
}Pile;

Element* CreerElement(){
	Element *m = (Element*)malloc(sizeof(Element));
	if(!m){
		printf("Erreur");
		exit(-1);
	}
	else{
		m->val = 0;
		m->suivant= NULL;
	}
	return m;
}

Pile* CreerPile()
{
	Pile *P;
	P=(Pile*)malloc(sizeof(Pile)) ;
	if (P==NULL) {  printf("Allocation non reussie\n");  exit(-1);}
	else {
            P->debut=NULL;
            P->taille=0;
    }
	return P;
}

int SaisirPile(Pile *P)
{
	int n;
	do{
		printf("Donner le nombre des elements:\n");
		scanf("%d",&n);
	}while(n <= 0);
    int i;
	for ( i = 0; i < n; ++i)
	{
		Element *m;
		m = CreerElement();
		printf("Donner l'\'elements Num. %d\n",i+1);
		scanf("%d",&m->val);

		m->suivant = P->debut;
		P->debut = m;
		P->taille++;
	}
	return 0;
}


void AjouterPile(Pile * P, int val)// empiler
{
	Element *m;
	m = CreerElement();
	m->val = val;
	m->suivant = P->debut;
	P->debut = m;
	P->taille++;
}

int SupprimerPile(Pile *P)//depiler
{
	Element *supp_element; int res;
	if (P->taille == 0)
	    printf("impossible pile vide\n");
	else {
		supp_element = P-> debut;
		P->debut = P->debut->suivant;
		res=supp_element->val;
		free(supp_element);
		P->taille--;
	}
	return res;
}

int CalculerTailePile(Pile *Pi){
	return (Pi->taille);
	// Autrement avec la boucle while et test de courant!=NULL
}

Pile* Concatenation(Pile *Pi1, Pile *Pi2)
{
	Pile *newPi = CreerPile();
	int i;
	Element *courant;
	courant = Pi1->debut;
	for(i=0; i < Pi1->taille; i++){
		Element *m;
		m = CreerElement();
		m->val = courant->val;
		m->suivant = newPi->debut;
		newPi->debut = m;
		newPi->taille++;
		courant = courant->suivant;
	}
	courant = Pi2->debut;
	for(i=0; i < Pi2->taille; i++){
		Element *m;
		m= CreerElement();
		m->val = courant->val;
		m->suivant = newPi->debut;
		newPi->debut = m;
		newPi->taille++;
		courant = courant->suivant;
	}

	return newPi;
}

void AffichePile (Pile *Pi)
{
	Element *courant;
	int i;
	if(Pi->taille==0)
		printf("Pile vide.\n");
	else{
		courant = Pi->debut;
		for(i=0; i < Pi->taille; i++)
			{ printf("Adresse de la page %d : %d\n",i, courant->val);
			  courant = courant->suivant;
			  }
		}
}


int operation(int a, int b, int op){
    if(op == '+')
        return a+b;
    if(op == '-')
        return a-b;
    if(op == '*' )
        return a*b;
    if(op == '/')
        return (b!=0)?a/b:0; // 0 impossible!!!
}

void evaluerExpression(Pile *Pi, char express[])
{
	char chiffreEnChar[2] = {'0','\0'};
	int i;
	for(i=0; i < strlen(express); i++){
        if(isdigit(express[i])){
            chiffreEnChar[0] = express[i];
            AjouterPile(Pi, atoi(chiffreEnChar)); // empiler
        }else{
            int a, b;
            a = SupprimerPile(Pi); // depiler
            b = SupprimerPile(Pi); // depiler
            AjouterPile(Pi, operation(a,b, express[i]));
        }
    }
    int res = SupprimerPile(Pi); // depiler
    printf("Le resultats est : %d\n", res);
}

void verifierExpression(Pile *Pi, char express[])
{
	char chiffreEnChar[2] = {'0','\0'};
	int i, erreur = 0;
	for(i=0; i < strlen(express); i++){
        if(express[i]=='{' || express[i]=='(' || express[i]=='['){
            AjouterPile(Pi, express[i]); // empiler
        }else if(express[i]=='}' || express[i]==')' || express[i]==']') {
            int a;
            if (Pi->taille)
                a = SupprimerPile(Pi); // depiler
            else{
                // delimiteur fermants sans
                // delimiteur ouvrant
                // exemple: [a+b*a+b)]
                erreur = 1;
            }

        }
    }
    if(Pi->taille == 0 && erreur == 0)
        printf("L'expresion est correcte");
    else
        printf("L'expresion est incorrecte");
}


int main(int argc, char const *argv[])
{
	Pile *Pi1 = CreerPile();
	evaluerExpression(Pi1, "354*+2*");
	verifierExpression(Pi1, "[a+b*(a+b)]");

	/*Pile *Pi2 = CreerPile();
	SaisirPile(Pi2);
	printf("Affichage 2 :\n");
	AffichePile(Pi2);
	printf("Concatenation\n");
	Pile *Pi3 = CreerPile();
	Pi3 = Concatenation(Pi1,Pi2);
	printf("Affichage 3:\n");
	AffichePile(Pi3);*/

	return 0;
}
/* run this program using the console
 pauser or add your own getch,
 system("pause") or input loop */
/*
int main()
{
	Poly *p, *d;
	p = Cree_polynome();
	Ajout_fin_polynome(p, 2, -2.5);
	Ajout_fin_polynome(p, 4, 2.5);
	Ajout_fin_polynome(p, 6, 3);
	Affiche_croiss_polynome(p);
	Affiche_decroiss_polynome(p);
	d = Derive_polynome(p);
	Affiche_croiss_polynome(d);
	Affiche_decroiss_polynome(d);

    printf("\n___________ exo 2 _________\n");

	Q2();
	getch();
	return 0;
}
*/
