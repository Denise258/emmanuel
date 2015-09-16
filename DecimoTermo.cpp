#include <iostream>
using namespace std;

int main(){
	setlocale (LC_ALL, "Portuguese");
	float n1, r, a1, n;
	n = 10;
	cout<<"Entre com a razão"<<endl;
	cin>>r;
	cout<<"Entre com o primeiro termo"<<endl;
	cin>>a1;
	n1 = a1 + (n-1)*10;
	cout<<"O decimo termo: " <<n1<<endl;
	
	return 0;
	
}
