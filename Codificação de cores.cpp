#include <iostream>
using namespace std;

int main() {
setlocale (LC_ALL, "Portuguese");
	int ponto, qtdlinha, qtdcoluna, bitslinhas, bitscolunas, totalbits, totalbytes;
	ponto = 3;
	cout <<"Digite a quantidade de linhas da figura"<<endl;
	cin>>qtdlinha;
	cout <<"Digite a quantidade de colunas da figura"<<endl;
	cin>>qtdcoluna;
	bitslinhas = qtdcoluna * ponto;
	bitscolunas =  qtdlinha * ponto;
	totalbits = bitslinhas * bitscolunas;
	totalbytes = totalbits*8;
	cout <<"A quantidade de bits de cada linha é:"<<bitslinhas<<endl;
	cout <<"A quantidade de bits de cada coluna é:"<<bitscolunas<<endl;
	cout <<"A quantidade de bits da figura é:"<<totalbits<<endl;
	cout <<"A Quantidade de bytes da figura é:"<<totalbytes<<endl;
	

	return 0;
}
