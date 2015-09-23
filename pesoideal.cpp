#include <iostream>
using namespace std;

int main(){
	setlocale (LC_ALL, "Portuguese");
	double altura, pesoideal;
    char sexo;
	cout<<"Entre com o sexo F ou M"<<endl;
	cin>>sexo;
	if (sexo!='M'||sexo!='F'){
		cout<<"Sexo Invalido"<<endl;
		cout<<"O programa será finalizado"<<endl;
		}
			else {
				cout<<"Entre com a altura"<<endl;
				cin>>altura;
				if (sexo == 'M'){
					pesoideal = (72.7 * altura)-57;
					cout<<"O Peso ideal é : "<<pesoideal<<endl;
				}
					else {
						if (sexo == 'F'){
							pesoideal = (62.1 * altura )- 44,7;
							cout<<"Entre o peso ideal é :"<<pesoideal<<endl;	
            		}			
				}	
		}
		return 0;	
	}
