#include<iostream>
using namespace std;

int fibonacci(int n){
 	if(n == 0 || n == 1)
	  return 1;
 	else 
      return (fibonacci(n-1) + fibonacci(n-2));
 	}

int main(){
 	int n;
 	do{
 	    cout << "Tapez un nombre entier positif:\n";
 	    cin >> n;
		}while(n < 0);

	cout << "Les " << n << " premiers termes de la suite de Fibonacci sont:\n";
	for(int i = 0; i <= n; i++)
	   cout << fibonacci(i) << endl;
return 0;		
}
