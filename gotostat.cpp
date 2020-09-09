#include<iostream>
using namespace std;
int main(){
	int marks;
	cout<<"Enter your marks\n";
	cin>>marks;
	if(marks<40){
		goto reappear;

	reappear:
	    cout<<"You will have to reappear\n";
	}
	else{
		cout<<"You are promoted to the next class\n";
	}

}