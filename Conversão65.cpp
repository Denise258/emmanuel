#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num, b0,b1, b2, b3, b4, b5, b6, b7, resto;
	num = 65;

	b1 = num/2;
	resto = num % 2;
	b2 = resto/2;
	resto = resto % 2;
	b4 = resto/2;
	resto = resto % 2;
	b5 = resto/2;
	resto = resto % 2;
	b6 = resto/2;
	resto = resto % 2;
	b7 = resto/2;
	resto = resto % 2;
	
	cout<<"O número em bits é :"<<b7<<b6<<b5<<b4<<b3<<b2<<b1<<endl;
	
	return 0;
}
