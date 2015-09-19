#include <iostream>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int op,x,y;
	cout<<"Menu de Opçoes"<<endl;
	cout<<"1 - Adição"<<endl;
	cout<<"2 - Subtração"<<endl;
	cout<<"3 - Potencia"<<endl;
	cout<<"4 - Raiz Quadrada"<<endl;
	cout<<"5 - Divisão"<<endl;
	cin>>op;
	if (op<1 || op>5){
		cout<<"Opção invalida"<<endl;
		cout<<"O programa será finalizado"<<endl;
	}
	else {
		cout<<"Digite o primeiro numero"<<endl;
		cin>>x;
		cout<<"Digite o segundo numero "<<endl;
		cin>>y;
		if (op==1){
			cout<<"x+y ="<<x+y<<endl;
		}
		if (op==2){
			cout<<"x-y = "<<x-y<<endl;
		}
		if (op==3){
			cout<<"x elevado y "<<pow(x,y)<<endl;
		}
		if (op==4){
			cout<<"Raiz quadrada primeiro numero = "<<sqrt(x)<<endl;
			cout<<"Raiz quadrada primeiro numero = "<<sqrt(y)<<endl;
		}
		if (op==5 || y!=0){
			cout<< "x/y = "<<x/y<<endl;
		}
		if (op == 5 || y == 0){
			cout<<"Nao é possivel fazer divisão por 0"<<endl;
		}
	}
	return 0;
}
	
