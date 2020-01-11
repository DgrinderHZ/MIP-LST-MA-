#include<iostream>
#include<cmath>
using namespace std;

class Complexe{
	float im, re;
	public:
		Complexe(float i=0, float r=0){
			im = i;
			re = r;
		}
		void affiche(){
			cout<< re <<" +i ("<< im<<")\n";
		}
		float getIm() const{
			return im;
		}
		float getRe() const{
			return re;
		}
		float getMod(){
			return sqrt(re*re + im*im);
		}
		float getArg(){
			float res;
			if(im == 0 && re < 0) return 3.14;
			 
			res = im / (re + getMod());
			res = 2*atan(res);
			return res;
		}
		Complexe operator/(Complexe &c){
			float i, r, den;
			den = c.re * c.re + c.im * c.im;
			r = (re * c.re + im * c.im) / den;
			i = (im * c.re - re * c.im) / den;
			return Complexe(i, r);
		}
};

int main(){
	Complexe c(2, 2), v2, v1, div;
	c.affiche();
	
	int b; 
	float i, r;
	cout<<"Donner b: ";
	cin>>b;
	cout<<"Donner v1: reel puis imaginaire!\n";
	cin>>r >>i;
	v1 = Complexe(i, r); v1.affiche();
	cout<<"Donner v2: reel puis imaginaire!\n";
	cin>>r >>i;
	v2 = Complexe(i, r); v2.affiche();
	div = v1/v2;
	cout<< "division\n";
	div.affiche();
	
	/* 5) test */
	if(b == 0 && (v1.getRe() != 0.0 || v1.getIm()  != 0.0)){
		cout<<"Erreur! Division par zero!";
		exit(-1);
	}else if(b == 0 && (v1.getRe() == 0.0 && v1.getIm()  == 0.0)){
		cout<<"Erreur! Resultat indefini!";
		exit(-1);
	}else{
		cout<<"OK!";
	}
return 0;
}
