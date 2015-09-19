#include <iostream>
#include <cmath>
use namespace std;

int main (){
set locale(ALL_LC, "Portuguese");
float raio, c, a, v;
cout<<"Digite a medida do raio da esfera"<<endl;
cin>>raio;
c = 2*3.14*raio;
a = 3.14 * pow(raio,2);
v = (3/4)* 3.14 * pow(raio,3);
cout<<"A esfera de raio", raio, "tem comprimento:", c, "area", a, "e volume:", v);
return 0;
}
