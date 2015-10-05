#include <iostream>
using namespace std;
int main(){
	int num;
	cout<<"Write a positve number"<<endl;
	cin>>num;
	if (num < 0){
		cout<<"Invalid Number· The program will be closed."<<endl;
	}
	else {
		if (num % 2 ==0 || num % 3 == 0 || num % 5 == 0){
				cout<<" Number is divisible for 2, 3 and 5"<<endl;
		}
		else {
				cout<<"The number is not divisible for 2, 3 and 5"<<endl;
		}
	}
	return 0;
}
						
	
