#include<iostream>
#include<stdlib.h>
using namespace std;
#define N 10 // 10 polynomes

class poly0{
 	float a;
 	public:
 		poly0(float);
 	float val(float);
};

poly0::poly0(float a){
 	this->a = a;
}
 
float poly0::val(float x){ 
	return a;
}

/***********************************/

class poly1{
 	float a;
 	float b;
 	public:
 		poly1(float, float);
 	float val(float);
 	float zero(float, float);
 	poly0 derive();
};

poly1::poly1(float a,float b){
 	this->a = a;
 	this->b = b;
}

float poly1::val(float x){
 	return (a * x + b);
}

float poly1::zero(float c,float d){ // [a,b] = [c,d] l'intervale
    if( (-b/a) > c && (-b/a) < d )
    	cout << "La racine de Poly1 est: "<< -b/a;
    else
    	cout << "Pas de racine sous cette condition!!";
}
 
poly0 poly1::derive(){
 	return poly0(a);
}
 