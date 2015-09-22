#include <iostream>
#include <cmath>
using namespace std;

int main (){
setlocale(LC_ALL, "Portuguese");
double raio, c, a, v;
cout<<"Digite a medida do raio da esfera"<<endl;
cin>>raio;
c = 2*3.14*raio;
a = 3.14 * pow(raio,2);
v = 3/4* 3.14 * pow(raio,3);
cout<< "A esfera de raio "<<raio<<" tem comprimento: "<<c<<" e area "<<a<<" e volume: "<<v<<endl;
return 0;
}
