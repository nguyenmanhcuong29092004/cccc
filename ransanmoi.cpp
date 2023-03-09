#include<bits/stdc++.h>
#include<unistd.h>
#include<conio.h>
#include"mylib.h"
using namespace std;
//co 12 ham thanh phan va 1 ham play
void ve_tuong();
void khoi_tao_ran();
void ve_ran();
bool ran_de_qua();
void tao_qua();
void ve_qua();
void tao_ran_moi(int x,int y);
void xoa_ran_cu();
void dieu_khien(int check);
bool kt_ran_cham_than();
bool game_over();
void xu_ly_ran_an_qua();
void play();


//1.ve tuong
//toa do chieu dai:10-->95
//toa do chieu rong:1-->25
void ve_tuong(){//ve chieu dai
    for(int x=10;x<=95;x++){
        //ve canh chieu dai tren cua tuong
        gotoXY(x,1);
        cout<<"+";

        //ve canh chieu dai duoi cua tuong
        gotoXY(x,25);
        cout<<"+";
    }

    //ve chieu rong
    for(int y=1;y<=25;y++){
        //ve canh chieu rong trai cua tuong
        gotoXY(10,y);
        cout<<"+";

        //ve canh chieu rong phai cua tuong
        gotoXY(95,y);
        cout<<"+";
    }
}
//2.khoi tao 1 con ran gom 4 dot
int toa_do_x[100]={0};
int toa_do_y[100]={0};
int sl=4;//so luong dot cua ran

void khoi_tao_ran(){
    int x_khoi_tao=50;//toa do x cua dau ran
    int y_khoi_tao=13;//toa do y cua dau ran

    for(int i=0;i<sl;i++){
        //khoi tao do cho tung dot
        toa_do_x[i]=x_khoi_tao--;
        toa_do_y[i]=y_khoi_tao;
    }

}

//3.ve ran khi da khoi tao ran
void ve_ran(){
    for(int i=0;i<sl;i++){
        gotoXY(toa_do_x[i],toa_do_y[i]);

        if(i==0) cout<<"0";//ve dau ran
        else cout<<"o";//ve than ran
    }
}

//4.kiem tra ran co de qua khong.Neu khong thi moi tao duoc qua

int x_qua=-1;//khoi tao toa do x cho qua
int y_qua=-1;//khoi tao toa do y ho qua

bool kt_ran_de_qua(){
    for(int i=0;i<sl;i++){
        if(x_qua!=toa_do_x[i]&&y_qua!=toa_do_y[i]) return true;
    }
    return false;
}

//5.tao qua ngau nhien
void tao_qua(){
    //kiem tra dieu kien ran de qua ko roi tao qua
   do{
    //qua phai trong tuong va khong duoc cham tuong
      x_qua=rand()%(94-11+1)+11;
      y_qua=rand()%(24-2+1)+2;
   }while(kt_ran_de_qua());
}


//6.ve qua
void ve_qua(){
    gotoXY(x_qua,y_qua);
    cout<<"$";
}

//Tao ran moi va xoa ran cu la cach de ran co the di chuyen

//chi_so_cu|0  | 1  |  2 |  3 |
//chi_so_moi|? | 0  |  1 |  2 | 3|

//7.tao ran moi
void tao_ran_moi(int x,int y){//x,y la toa do cua o se di chuyen(vd:len;y--,xuong:y++)
    for (int i=sl;i>0;i--){//xet tu cuoi-->dau ran
        toa_do_x[i]=toa_do_x[i-1];
        toa_do_y[i]=toa_do_y[i-1];
    }

    //cap nhat chi so cho dau ran
    toa_do_x[0]=x;
    toa_do_y[0]=y;

}


//8.Xoa ran cu
void xoa_ran_cu(){
 gotoXY(toa_do_x[sl],toa_do_x[sl]);
 cout<<" ";
}

//9.Di chuyen khi bam nut
void dieu_khien(int check,int x,int y){
  if(_kbhit()){
    char c=_getch();
        if(c==119&&check!=1) check=0,y--;//len tren.Dang len tren thi ko duoc xuong duoi
        else if(c==115&&check!=0) check=1,y++;//xuong duoi
        else if(c==97&&check!=3) check=2,x--;//sang trai
        else if(c==100&&check!=2) check=3,x++;//sang phai

  }

}


//10.kiem tra ran cham than
bool kt_ran_cham_than(){
     for(int i=1;i<sl;i++){
        if(toa_do_x[0]==toa_do_x[i]&&toa_do_y[0]==toa_do_y[i]) return true;
     }
     return false;
}

//11.kiem tra game ket thuc

bool game_over(){
    if(toa_do_x[0]==10||toa_do_x[0]==95||toa_do_y[0]==1||toa_do_y[0]==25) return true;//cham tuong thi game over
    return kt_ran_cham_than();//cham than thi game over
}

//12.Xu li khi ran an qua(tang chieu dai ran, tao qua moi)

void xu_ly_ran_an_qua(){
    if(toa_do_x[0]==x_qua&&toa_do_y[0]==y_qua) {//kiem tra ran an qua
        sl++;
        tao_qua();
        ve_qua();
    }
}


void play(){ShowCur(0);
    SetColor(11);
    ve_tuong();

    khoi_tao_ran();

    tao_qua();
    ve_qua();

     int check=-1;
     int x=toa_do_x[0];
     int y=toa_do_y[0];
     while(true){
        xoa_ran_cu();

        ve_ran();

        dieu_khien(check,x,y);

        if(game_over()){break;}
        xu_ly_ran_an_qua();

        tao_ran_moi(x,y);
        sleep(100);
     }

}
int main(){
    play();
    _getch();
}
