#include<iostream>
using namespace std;
long long tinh(int n){
    while(n>0){
    return (2*n+1)*tinh(n-1);}
    return 1;
}

int main(){
    int n;
    cin>>n;
    cout<<tinh(n);
}
