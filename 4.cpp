#include <iostream>
#include <string>
#include "mylib.h"
#define MAX 100
using namespace std;
void box(int x, int y,int w,int h)
{

	//============= ve vien =============
	textcolor(1);
	SetColor(2);//update
	if (h <= 1 || w<=1)return;
	for (int ix = x;ix <= x + w;ix++)
	{
		gotoXY(ix, y);
		cout << "-";
		gotoXY(ix, y + h);
		cout << "-";
	}
	for (int iy = y;iy <= y + h;iy++)
	{
		gotoXY(x, iy);
		cout << "|";
		gotoXY(x + w, iy);
		cout << "|";
	}
	gotoXY(x, y);cout << "+";
	gotoXY(x + w, y);cout << "+";
	gotoXY(x, y + h);cout << "+";
	gotoXY(x + w, y + h);cout << "+";

}
int main(){
  box(1,10,95,25);
}
