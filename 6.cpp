#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;
int sosanh(string a, string b){
    if(a.size()!=b.size()) return 0;
   for(int i=0;i<a.size();i++){
      if((a[i]-'0')>(b[i]-'0')) return 1;
      else if((a[i]-'0')==(b[i]-'0')) continue;
      else return -1;
   }
}
bool cmp(string a, string b){
    if(a.size()<b.size()) return true;
    else if((a.size==b.size())&&sosanh(a,b)==1) return true ;
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<string>a;
    for(int i=0;i<n;i++) {
            string s;
            cin>>s;
            a.push_back(s);
    }
    sort(a.begin(),a.end(),cmp);
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
