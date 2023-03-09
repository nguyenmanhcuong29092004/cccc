#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int v[n+1],w[n+1];
    int dp[n+1][m+1];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++){
        cin>>v[i]>>w[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            dp[i][j]=dp[i-1][j];//ko lay;
            if(j>=w[i]) dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
        }
    }
    cout<<dp[n][m];
}
