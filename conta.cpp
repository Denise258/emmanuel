#include<iostream>
#include<math.h>
using namespace std;

int main (){
	string nome;
	float saldo, p;
	int qtdtotal, qtd, nc;
	qtdtotal = 0;
	qtd = 0;
	do {
		do {
		cout<<"Informe o numero da conta"<<endl;
		cin>>nc;
		if (nc == 0){
			cout<<"Numero da conta invalido"<<endl;
			cout<<"Informe uma conta invalida ou o programa será finalizado."<<endl;
			}
		}
		while (nc == 0);
		if (nc > 0){
			
			cout<<"Informe o nome"<<endl;
			cin>>nome;
			cout<<"Informe o saldo da conta"<<endl;
			cin>>saldo;
			}
				if (saldo > 500){
					cout<<"Cliente VIP"<<endl;
				}
			if (nc > 100 || nc < 200){
					qtd = qtd + 1;
			}
		
		qtdtotal = qtdtotal + 1 ;
	}		
	while (nc > 0);
			if (qtdtotal > 0){
				cout<< "O percentual de pessoas com o saldo entre R$ 100 e 200 reais é : "<<(p= qtd*(100/(qtdtotal -1)))<<"%"<<endl;
				}
	return 0;
				
}
