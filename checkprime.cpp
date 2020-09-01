#include<iostream>
using namespace std;
int main(){
    int number, i;
    cout<<"Enter the number:";
    cin>>number;
    for(i=2;i<number;i++){
        if(number%i==0){
        cout<<"not a prime no"<<endl;
        break;
        }
    }
    if(i==number){
    cout<<"prime no"<<endl;
    }
}
