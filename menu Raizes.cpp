#include <iostream>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int op; 
	double x, y, resultado;
	cout<<" Menu de Opcões"<<endl;
	cout<<"1. Raiz Quadrada"<<endl;
	cout<<"2. Raiz Cúbica"<<endl;
	cout<<"3. Potencia do Primeiro pelo segundo número. "<<endl;
	cout<<"Digite a opção"<<endl;
	cin>>op;
	if (op<1 || op>3){
		cout<<"Opção invalida"<<endl;
		cout<<"O programa será fechado."<<endl;	 
	}
	else{
		cout<<"Escreva o Primeiro Número"<<endl;
		cin>>x;
	}
	if (op == 1){
		resultado = sqrt(x);
		cout<<"A raiz quadrada do numero é: "<<resultado<<endl;
	}
	else{
		if (op == 2){
			resultado = pow(x, 1.0/3);
			cout<<"A raiz cúbica do numero é:"<<resultado<<endl;
		}
		else{
			if (op == 3){
			cout<<"Escreva o numero 2"<<endl;
			cin>>y;
				resultado = pow (x,y);
				cout<<"A pontencialização do primeiro numero com o segundo é "<<resultado<<endl;
			}
		}
	}
	return 0;
}
