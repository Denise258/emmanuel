#include <iostream>
using namespace std;
#include <cmath>
int main(){
	int bits, qtdpontos, coresdisponiveis, tmbits;
	float qtdbytes;
	cout <<"Digite a quantidade de bits"<<endl;
	cin>>bits;
	cout <<"Digite a quantidade de pontos"<<endl;
	cin>>qtdpontos;
	coresdisponiveis = pow(2,bits);
	tmbits = bits*qtdpontos;
	qtdbytes =  tmbits/8;
	cout <<" A quantidade de cores disponiveis são:"<<coresdisponiveis<<endl;
	cout <<" O tamanho da imagem em bits é:"<<tmbits<<endl;
	cout <<" O tamanho da imagem em bytes é:"<<qtdbytes<<endl;
	
	return 0;
}
