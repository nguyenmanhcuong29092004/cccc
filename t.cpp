#include<iostream>
#include<math.h>
using namespace std;

//User function Template for C++



class Node{
public:
    int val;
    Node *next;
    void nhap(int num){
        val=num;
        next=NULL;
    }
};
typedef class Node NODE;


class Solution{
public:
    Node *primeList(Node *head){
        Node *p = head;
        while(p){
            int i = 0;
            while(i <= p->val){
                if(p->val-i>0&&isPrime(p->val-i)){
                    p->val -=i;
                    break;
                }else if(isPrime(p->val+i)){
                    p->val +=i;
                    break;
                }
                i++;
            }
            p = p->next;
        }
        // puts("");
        return head;
    }

    bool isPrime(int num){
        if(num<=1)
            return false;
        for(int i = 2;i <= (int)sqrt(num);i++){
            if(num%i==0)
                return false;
        }
        return true;
    }
};
int main(){

    Node p;
    p.nhap(10);
   Solution s;
   cout<<s.primeList(&p)->val;
}
