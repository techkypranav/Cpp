#include<iostream>
using namespace std;
int main(){
    int sum=0,a,r;
    long int num;
    cout<<"Enter the number : ";
    cin>>num;
    a=num;
    while(num!=0){
        r=num%10;
        sum=(sum*10)+r;
        num=num/10;
    }
    if(sum==a)
        cout<<"No is palindrome ";
        else
            cout<<"No is not a palindrome";
        
    
}