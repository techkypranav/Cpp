#include <iostream>
using namespace std;
//program to find factorial if a number 
int main(){
    int fact,n,i;
    cout<<"enter number whose factorial you want"<<endl;
    cin>>n;
    fact=1;
    for(i=1;i<=n;i++)
        fact=fact*i;
    cout<<"factorial of the number is="<<fact;
}