#include<iostream>
#include<math.h>
#define N 1000
using namespace std;
const int EPS = pow(exp(1),-15);

float P(float x, float a){
 	return (pow(x, 2) - a);
}

float Pprime(float x){
 	return (2 * x);
}

int main(){
 	float x0, a;
 	int i;
 	float x[N];
 	cout << "###### Calcul de la racine carre #####\n";
 	do{
 		cout << "Donner un nombre reel positif\n";
 		cin >> a;
	}while(a < 0);

 	cout << "Donnez un x0 suffisament grand (eg. 2)\n";
 	cin >> x0;
 	x[0] = x0;
 	for(i = 1; i < N; i++){
 	    x[i] = x[i-1] - (P(x[i-1])/Pprime(x[i-1]));
 	    if(fabs(x[i] - x[i-1]) <= EPS) 
 	    	break;
 	} 

 	cout << "Voici la racine caree approche apres "<< i <<" iterations:";
 	cout << x[i];
 	cout << "\n## Comparaison##\n";
	cout << "La valeur rendu par la fonction sqrt() est:" << sqrt(a);
 	return 0;
 }
 
