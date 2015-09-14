#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
setlocale(LC_ALL, "Portuguese");
long tempo, qtdpacote;
int qtddatagramashoras = 30;
cout <<"Digite o tempo conectado: "<<endl;
cin >>tempo;
qtdpacote = (tempo*qtddatagramashoras)/3;
cout <<"A quantidade de pacotes que trafegam pela rede são:"<< qtdpacote<<endl;

	return 0;
}
