#include<iostream>
#include<cmath>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num;
	cout<<"Entre com o numero"<<endl;
	cin>>num;
	if (num>0){
	   cout<<"O numero é Positivo"<<endl;
	} 
         else{
		if (num<0){
		 	cout<<" numero é negativo"<<endl;
		}
          	else{
			if (num==0){
				cout<<"O numero é nulo"<<endl;

			}
		}
  	}
return 0;
}
