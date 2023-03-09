#include<iostream>
using namespace std;
const int MOD=1e9+7;
int powMod1(int x,int y){//Ham tinh luy thua
   long long res=1;
   for(int i=1;i<=y;i++){
    res*=x;
    res%=MOD;
   }
   return res;
}
int main(){
   int n;cin>>n;
   long long tich=1;
   for(int i=0;i<n;i++){
      int x;
      cin>>x;
      tich*=(powMod1(2,x)+1);
      tich%=MOD;
   }
   cout<<tich-1;
}
