#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
void kt(int a[],int n,int k){int tong=0;
    for(int i=0;i<n;i++) tong+=a[i];
    int sum=tong/4;

    int S=sum;
    int dp[n+1][S+1];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<n;i++){
        for(int j=1;j<=S;j++){
            dp[i][j]=dp[i-1][j];//neu ko chon
            if(j>=a[i]) dp[i][j]=max(dp[i][j],dp[i-1][j-a[i]]+1);
        }
    }
  for(int i=0;i<n;i++){
       for(int j=1;j<=S;j++){
           cout<<dp[i][j]<<" ";
       }
       cout<<endl;
   }
}


int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    kt(a,n,k);
}
