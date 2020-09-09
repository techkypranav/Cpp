//program to store and display student roll numbers in an array
#include<iostream>
using namespace std;
int main(){
	int arr[5],i;

	for(i=0;i<5;++i){
		cout<<"Enter the roll no\n";
	    cin>>arr[i];
	}
	for(i=0;i<5;++i){
        cout<<arr[i]<<endl;
	}
}