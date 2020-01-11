#include<iostream>
#include<math.h>
 using namespace std;
 
class point{
	int x,y;
	public:
	  point(int abs,int ord){
	  	  x = abs;
		  y = ord;
		}
	  void affiche(){
		  	cout<<"je suis un point\n";
		  	cout<<"coordonees: "<<x<<" "<<y<<endl;
		  }
	  	int getX() const{ return x;}
	  	int getY() const{ return y;}
};

class pointcol : public point{
	int coul;
	public: 
	   pointcol(int a, int b, int c) : point(a,b){
	   		coul=c;
	   }
	   void affiche(){
		   	point::affiche();
		   	cout<<"la couleur est:"<<coul<<endl;
	   }
	   float rho();
};

float pointcol::rho(){ 
	return sqrt(getX()*getX()+getY()*getY()); 
	}

int main(){
	point b(1,2);
	b.affiche();
	pointcol a(1,2,3);
	a.affiche();
	float e;
	e = a.rho();
	cout<< "r = "<< e;
	return 0;
}
