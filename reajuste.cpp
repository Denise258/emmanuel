#include<iostream>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	float precoatual, vendamedia, novopreco, reajuste;
	cout<<"Digite o valor do Produto"<<endl;
	cin>>precoatual;
	cout<<"Digite o valor medio da venda mensal do produto."<<endl;
	cin>>vendamedia;
	if (precoatual >= 80 || vendamedia >= 1200){
			cout<<"O produto terá desconto de 20%"<<endl;
			reajuste = precoatual * 0.20;
			novopreco = precoatual - reajuste;
			cout<<"O novo preço do Produto é :"<<novopreco<<endl;
			}
			else{
			if (precoatual >= 30 && precoatual < 60 || vendamedia >=500 && vendamedia <1200){
				cout<<"O produto terá um reajuse de 15% "<<endl;
				reajuste = precoatual * 0.15;
				novopreco = precoatual + reajuste;
				cout<<"O novo preço do Produto é :"<<novopreco<<endl;
				}
				else{
				if (precoatual < 30 || vendamedia < 500){
					cout<<"O produto terá um reajuste de 10%"<<endl;
					reajuste = precoatual * 0.10;
					novopreco = precoatual + reajuste;
					cout<<"O valor a ser ajustado é "<<reajuste<<endl;
					cout<<"O novo preço do Produto é :"<<novopreco<<endl;	
						}
					}
				}	
return 0;
			
}
