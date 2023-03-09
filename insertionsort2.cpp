#include<iostream>
using namespace std;
void xuat(int a[],int n){
  for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
  }
  cout<<endl;

}

void insertionsort(int a[],int n){
  int i,j,key;
  for(int i=1;i<n;i++){
  int j=i-1;
  key=a[i];
  while(j>=0&&a[j]>key){
       a[j+1]=a[j];
       j--;
  }

  a[j+1]=key;
  xuat(a,n);
  }
}

int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++) cin>>a[i];
  insertionsort(a,n);
}
