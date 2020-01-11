#include<iostream>
using namespace std;

int c = 15, d = 13;

void f(int x){ 
	x += ++x + 2;
}

void g(int *x){ 
	*x += ++(*x )+ 2;
}

void g(int &x){ 
	x += ++x + 2;
}

int main(){
	int a = 10, b = 10;
	int &p=d;
	f(a); cout<<"a= "<<a<<endl;
	g(b); cout<<"b= "<<b<<endl;
	g(&a); cout<<"d= "<<a<<endl;
	int pp = 10;
    do{
       printf("barmej.com\n");
    }while(pp != 10);
return 0;
}
