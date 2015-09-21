#include <iostream>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int x,y,z;
	cout<<"Digite o primeiro numero"<<endl;
	cin>>x;
	cout<<"Digite o segundo numero "<<endl;
	cin>>y;
	cout<<"Digite o terceiro numero "<<endl;
	cin>>z;
		if (x==y || x==z || x==z){
			cout<<"Numero Iguais o programa será encerrado"<<endl;

		}
		else
			if (x<y && x<z){
				if (y<z){
					cout<<"Os números na ordem crescente : "<<x <<y <<z<<endl;
				}
				else {
					cout<<"Os números na ordem crescente : "<<x <<z<< y<<endl;
				}
			}
			if (y<x && y<z){
				if(x<z){
						cout<<"Os números na ordem crescente: "<<y <<x <<z<<endl;
				}
				else{
					cout<<"Os números na ordem crescente: "<<y <<x <<z<<endl;
				}
			}
			if (z<x && z>y){
				if (x<y){
						cout<<"Os números na ordem crescente: "<<z <<x <<y<<endl;	
				}
				else{
						cout<<"Os números na ordem crescente: "<<z <<x <<y <<endl;	
				}
			}
			return 0;
		}
