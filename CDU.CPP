#include<iostream>
#include<cmath>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, x1, x2, x3, resto;
	cout<<"Entre com o numero de digitos"<<endl;
	cin>>num;
	x1=num/100;
	resto = num % 100;
	x2 = resto/10;
	resto = resto % 10;
	x3 = resto/1;

	cout<<"O numero ao contrário é" <<x3<<x2<<x1<<endl;
	return 0;
	
}
