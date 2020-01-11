#include<iostream>
#include<stdlib.h>
#include "polynome.h"

using namespace std;

// La fonction principale
int main(){
 	float a, b, x;
	
	cout << "### Test de Poly d\'ordre 0 ###\n";
	cout << "Donner la valeur de Poly0: a\n";
	cin >> a;
	poly0 po(a);
	cout << "Donner une valeur x pour calculer Poly0(x)\n";
	cin >> x;
	cout << "Poly0(" << x << ")= " << po.val(x);
	
	cout << "\n### Test de Poly d\'ordre 1 ###\n";
	
 	cout << "Donner les valeur de Poly1: a puis b\n";
	cin >> a >> b;
	poly1 pol(a,b);
	cout << "Donner une valeur x pour calculer Poly1(x)\n";
	cin >> x;
	cout << "Poly1(" << x << ")= " << pol.val(x);

    cout << "\n ##### Deriver et racines 'fonction zero(a,b)' #####\n";
    // a,b et x sont déja déclarés en haut ;) !!
    poly1 *p; // déclaration du tableau
    p = (poly1*)malloc(N*sizeof(poly1));
    float c, d; // on remplace [a,b] par [c,d]
    for(int i = 0; i < N; i++){
      cout << "Donner les valeur de Poly1 numero" << i+1  <<": a puis b\n";
      do 
	    cin >> a; 
	  while(a == 0);
	  cin >> b;
	  p[i] = poly1(a, b);  
	}

	do{
	  cout << "## LES BORNES##\nDonner les bornes de [c;d]: c puis d\n";
	  cin >> c >> d;
	}while(c >= d);
	cout << "## x ##\nDonner une valeur x pour calculer Poly1(x)\n";
	cin >> x;
	for(int i = 0; i < N; i++){
		cout << "#####" << i+1 << "ieme affichage ###\n";
	cout << "La valeur de la " << i+1 << "ieme Poly1 est:";
	cout << p[i].val(x) << "\n";
    cout << "La derivee de la " << i+1 << "ieme Poly1 est:";
	cout << (p[i].derive()).val(x) << "\n";
	p[i].zero(c,b);
	cout << "\n";
	}
	return 0; 
 }
