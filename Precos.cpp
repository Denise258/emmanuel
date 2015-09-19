#include<iostream>
using namespace std;

int main(){
set locale(ALL_LC, "Portuguese");
int cod, qtd;
float preco;
cout<<"Digite o código do produto de acordo com o menu a seguir:"<<endl;
cout<<"100 cachorro quente"<<endl;
cout<<"101 bauru simples"<<endl;
cout<<"102 bauru c/ovo"<<endl;
cout<<"103 hamburger"<<endl;
cout<<"104 cheeseburger"<<endl;
cout<<"105 refrigerante"<<endl;
cin<<cod;
cout<<"Digite a quantidade desejada"<<endl;
cin<<qtd;
	if (cod == 100){
	   preco= qtd*1.10;
	}
	else{
	    if (cod == 102){
		preco= qtd*1.50;
	    {
	     else {
		if (cod == 103){
		    preco = qtd*1.10;
		    }
		    else
			if (cod == 104){
			     preco = qtd*1.30;
			}
			 else{
			     if(cod == 105){
				preco = qtd*1.00;
				}
			    }
			}
		    }
		}
	  }
	cout<<"O preco a pagar è : "<<preco<<endl;
   }

