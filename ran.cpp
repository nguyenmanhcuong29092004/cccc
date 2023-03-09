#include<bits/stdc++.h>
#include"mylib.h"
using namespace std;
void ve_tuong();
void ve_tuong(){//toa do chieu dai:10-->95
    //toa do chieu rong:1->25
    for(int i=10;i<=95;i++){
        //ve chieu dai tren cua tuong
        gotoXY(i,1);
        cout<<"+";
        //ve chieu dai duoi cua tuong
        gotoXY(i,25);
        cout<<"+";
    }

    for(int i=1;i<=25;i++){
        //ve chieu rong trai cua tuong
        gotoXY(10,i);
        cout<<"+";
        //ve chieu rong phai cua tuong
        gotoXY(95,i);
        cout<<"+";
    }

}

void play(){
    SetColor(11);
    ve_tuong();

}
int main(){
    play();
    _getch();
}
