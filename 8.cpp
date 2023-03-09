#include<iostream>
#include<stack>

using namespace std;
bool check(string t){ stack<char>s;
   for(int i=0;i<t.size();i++){int x=s.top();
      if((t[i]=='}'||t[i]==']'||t[i]==')')&&s.empty()==true) return false;
      else if(t[i]=='{'||t[i]=='['||t[i]=='(') s.push(t[i]);
      else if((t[i]=='}'&&x=='{')||(t[i]==']'&&x=='[')||(t[i]==')'&&x=='(')) s.pop();
      else return false;
   }
   return true;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    if(check(s)==true) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
  }

}
