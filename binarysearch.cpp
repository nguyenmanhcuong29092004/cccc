#include<iostream>
int BinarySearch(int a[],int l,int r,int x){
   int m=(l+r)/2;
   while(l<=r){
   if(a[m]==x) return m;
   else if(a[m]>x) return BinarySearch(a,m+1,r,x);
   else if(a[m]<x) return BinarySearch(a,l,m-1,x);
   else return -1;
   }

}
