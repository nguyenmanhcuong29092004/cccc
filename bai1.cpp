#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
    int n,S;
    cin>>n>>S;
    int w[n+1],v[n+1];
    int dp[n+1][S+1];//dp[i][j]:do vat lay tu 1 toi i co trong luong j
    for(int i=1;i<=n;i++){
        cin>>w[i]>>v[i];
    }
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=S;j++){
            dp[i][j]=dp[i-1][j];//neu ko lay
            if(j>=w[i]) dp[i][j]=max(dp[i][j],dp[i-1][j-w[i]]+v[i]);
        }
    }

cout<<dp[n][S];}
