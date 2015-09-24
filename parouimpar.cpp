#include<iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int jogada1, jogadapc, resultado, escolha;
	jogadapc = 5;
	cout<<"1 - Impar"<<endl;
	cout<<"2 - Par"<<endl;
	cout<<"Escolha Par ou Impar"<<endl;
	cin>>(escolha);
	if (escolha != 1 && escolha != 2){
		cout<<"Entre com uma escolha válida"<<endl;
		cout<<"O programa será finalizado."<<endl;
		}
		else{
			cout<<"Digite um número de 1 a 10"<<endl;
			cin>>(jogada1);
			resultado = jogada1 + jogadapc;
			if (resultado % 2 == 0 && escolha == 1){
				cout<<"O resultado é par"<<endl;
				cout<<" VOCÊ PERDEU"<<endl;
			}
				else{
					if (resultado % 2 == 0 && escolha ==2){
						cout<<"O resultado é par"<<endl;
						cout<<"VOCÊ GANHOU"<<endl;
					}
						else{
							if (resultado % 2 ==1 && escolha == 1){
								cout<<"O resultado é impar"<<endl;
								cout<<"VOCE GANHOU"<<endl;
							}
								else{
									if (resultado % 2 ==1 && escolha ==2){
										cout<<"VOCÊ PERDEU"<<endl;
									}
								}
								
						}
						
				}	
		}
		
	
return 0;
}
