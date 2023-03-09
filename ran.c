#include<>
#include"mylib.h"
void play(){
    SetColor(11);
    ve_tuong();

}

void ve_tuong(){
    for(int i=10;i<=95;i++){
        gotoXY(i,1);
        cout<<char(196);

        gotoXY(i,25);
        cout<<char(196);
    }
}
void main(){
    play();
    _getch();
}
