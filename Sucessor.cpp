#include <iostream>
#include <cmath>
using namespace std;
int main(){
setlocale(LC_ALL, "Portuguese");
int numero, antecessor, sucessor;
cout<<"Entre com um numero"<<endl;
cin>>numero;
antecessor = numero - 1;
sucessor = numero + 1;
cout<<"O sucessor é:"<<sucessor<<endl;
cout<<"O antecessor é:"<<antecessor<<endl;

return 0;

}
