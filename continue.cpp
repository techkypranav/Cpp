//program to demonstrate the use of continue statement(the program will print odd nos only)
#include<iostream>
using namespace std;
int main(){
	for(int i=1; i<=20; i++){
		if(i%2==0){
			continue;
		}
		cout<<i<<endl;
	}
}
