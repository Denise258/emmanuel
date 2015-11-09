#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <vector>
using namespace std;
int main(){
	ofstream arquivograva;
	ifstream arquivoler;
	vector <string>nome;
	vector<char>sexo;
	vector<int>idade;
	vector<float>altura;
	string linha;
	int cont =0, inicio, tamanho;
	arquivoler.open("dados.txt");
	getline(arquivoler, linha);
	while (arquivoler.good()){
	  cout << linha << endl;
		if (cont>=3){
			inicio = 0;
			tamanho = linha.find(';', inicio);
			nome.push_back(linha.substr(inicio, tamanho));
			inicio = inicio + tamanho+1;
			tamanho = linha.find(';',inicio) - inicio;
			sexo.push_back(linha.substr(inicio, tamanho).at(0));
			inicio = inicio + tamanho + 1;
			tamanho = linha.find(';', inicio) - inicio;
			idade.push_back(atoi(linha.substr(inicio, tamanho).c_str()));
			inicio = inicio + tamanho +1;
			altura.push_back((float)atof(linha.substr(inicio).c_str()));
		}			
		getline(arquivoler, linha);
		cont ++;
	}
		if (nome.size()==0){
			cout<<"Arquivo vazio e lista vazia"<<endl;
		}
		else {
				for (int i = 0; i<nome.size();i++){
				cout<<"nome: "<<nome[i]<<" ";
				cout<<"Sexo: "<<sexo[i]<<" ";
				cout<<"idade: "<<idade[i]<<" ";
				cout<<"altura: "<<altura[i]<<endl;
					}
			}
			arquivoler.close();


}
