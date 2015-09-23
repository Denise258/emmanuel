#include <iostream>
#include <cmath>
using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");
        int qtdlinhas, qtdcolunas, bits, qtdpontos,bytes;
        float mega, giga;


        cout <<"Digite a quantidade de linhas da imagem"<<endl;
        cin>>qtdlinhas;
        cout <<"Digite a quantidade de colunas da imagem"<<endl;
        cin>>qtdcolunas;
        cout <<"Digite a profundidade de cor da imagem"<<endl;
        cin>>bits;


        qtdpontos = qtdlinhas * qtdcolunas;
        bytes = (qtdpontos * bits)/8;
        mega = ((float) bytes/(1024*1024));
        giga = (mega/1024);

        cout <<"A quantidade de pontos da figura é:"<<qtdpontos<<endl;
        cout <<"O tamanho da figura em bytes é:"<<bytes<<endl;
        cout <<"O tamanho da figura em mega é:"<<mega<<endl;
        cout <<"O tamanho da figura em Giga é:"<<giga<<endl;

        return 0;
}
