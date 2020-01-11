#include<iostream>
#include<math.h>
#define N 1000
using namespace std;
const int EPS = pow(exp(1), -15); //1e-15;
 
float P(float x){
 	return (pow(x,5) - x - 1);
}

float Pprime(float x){
 	return (5 * pow(x,4) - 1);
}

int main(){
 	float x0;
 	int i;
 	float x[N];
 	cout << "Donnez un x0 suffisament grand (eg. 2)\n";
 	cin >> x0;
 	x[0] = x0;
 	for(i = 1; i < N; i++){
 	    x[i] = x[i-1] - (P(x[i-1])/Pprime(x[i-1]));
 	    if(fabs(x[i] - x[i-1]) <= EPS) 
 	    	break;
 	} 
 	cout << "Voila la solution approche apres "<< i <<" iterations:";
 	cout << x[i];
return 0;
}