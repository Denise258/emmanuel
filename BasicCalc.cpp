#include <iostream>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int op, x, y, resultado;
	cout<<"Menu de Opcões"<<endl;
	cout<<"1. Adição"<<endl;
	cout<<"2. Subtração"<<endl;
	cout<<"3. Multiplicação"<<endl;
	cout<<"4. Divisão"<<endl;
	cout<< "Entre com a opção" <<endl;
	cin>>op;
	if (op<0 || op>4){
		cout<<"Opção Invalida"<<endl;
		cout<<"O programa será finalizado"<<endl;
		}
		else{
		cout<<"Digite o primeiro numero"<<endl;
		cin>>x;
		cout<<"Digite o segundo numero "<<endl;
		cin>>y;
		}
		switch (op){
			case 1:
			op == 1;		
			resultado = x+y;
			cout<<"A soma dos numeros é "<<resultado<<endl;
		break;
		case 2:
			op == 2;
			resultado = x- y;
			cout<<"A subtração dos numeros é"<<resultado<<endl;	
		break;
		case 3:
			op == 3;
			resultado = x*y;
			cout<<"A multiplicaão dos numeros é"<<resultado<<endl;
		break;
		case 4: 
		op == 4;
		resultado = x/y;
		cout<<"A Divisão dos numeros é"<<resultado<<endl;	
		break;	
	}
	

return 0;
}
