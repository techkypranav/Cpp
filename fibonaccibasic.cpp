#include<iostream>
using namespace std;
void fibonacci(int n){
    int f=0,s=1,t,i;
    cout<<f<<s<<""<<"";
    for(i=3;i<=n;i++){
        t=f+s;
        cout<<t<<"";
        f=s;
        s=t;
    }

}
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    fibonacci(n);
    return 0;
}

