#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;
int strcmpi(string a,string b){
  int n1=a.size();
  int n2=b.size();
  for(int i=0;i<min(n1,n2);i++){
    if(a[i]!=b[i]){
        if(a[i]>b[i]) return 1;
        else return -1;
    }
  }
  if(n1==n2) return 0;
  else if(n1<n2)return -1;
  else return 1;
}
bool cmp(string a, string b){
    if((a.size()<b.size())||(a.size()==b.size()&&strcmpi(a,b)<0)) return true;
    else return false;
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
