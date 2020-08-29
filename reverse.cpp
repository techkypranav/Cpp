#include<iostream>
using namespace std;
int main(){
    int n,i=0,a;
    cout<<"enter a number whose reverse to be found:";
    cin>>n;
    while(n!=0){
        a=n%10;
        i=i*10+a;
        n/=10;
    }
    cout<<"reversed number :"<<i<<endl;
    return 0;
}