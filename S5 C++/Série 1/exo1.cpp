#include<iostream>
using namespace std;

int main(){
 	
 	int a,i=0;
 	do{
	 	cout << "Donnez un nombre entier positif:\n";
	 	cin >> a;
    }while(a < 0);

    while(i*i <= a) i++;

    cout << "La partie entier de la racine carre de "<< a <<" est: "<< i-1;
    
return 0;
}
