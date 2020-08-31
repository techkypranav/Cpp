#include<iostream>
using namespace std;
int main(){
    int s=0,r;
    long int n;
    cout<<"Enter the number:";
    cin>>n;
    while(n!=0){
        r=n%10;
        s=s+r;
        n=n/10;
    } 
    cout<<"sum is :"<<s<<endl;
    return 0;
}