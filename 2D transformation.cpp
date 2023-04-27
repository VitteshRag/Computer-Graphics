#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
int gd=0,gm,x1,y1,x2,y2,x3,y3,ty,tx,sfx,sfy;
double s,c, angle;
initgraph(&gd, &gm, (char*)"");
setcolor(RED);
cout<<"Enter coordinates of triangle: ";
cin>>x1>>y1;
cin>>x2>>y2;
cin>>x3>>y3;
cleardevice();
line(x1,y1,x2,y2);
line(x2,y2, x3,y3);
line(x3, y3, x1, y1);
cout<<"Enter 1. For Rotation 2. For Translation 3. For Scaling :"<<endl;
int choice;
cin>>choice;
switch(choice)
{

case(1):
    cout<<"Enter rotation angle: ";
    cin>>angle;
    c = cos(angle *M_PI/180);
    s = sin(angle *M_PI/180);
    x1 = floor(x1 * c + y1 * s);
    y1 = floor(-x1 * s + y1 * c);
    x2 = floor(x2 * c + y2 * s);
    y2 = floor(-x2 * s + y2 * c);
    x3 = floor(x3 * c + y3 * s);
    y3 = floor(-x3 * s + y3 * c);
    setcolor(GREEN);
    line(x1+50, y1+50 ,x2+50, y2+50);
    line(x2+50,y2+50, x3+50,y3+50);
    line(x3+50, y3+50, x1+50, y1+50);
    break;
case(2):
    cout << "Enter distances for translation (in x and y directions): ";
    cin >> tx >> ty;
        x1 += tx;
        y1 += ty;
        x2 += tx;
        y2 += ty;
        x3 += tx;
        y3 += ty;

    setcolor(YELLOW);
    line(x1,y1,x2,y2);
    line(x2,y2, x3,y3);
    line(x3, y3, x1, y1);
    break;
case(3):
    cout << "Enter scale factors: sfx and sfy : ";
    cin >> sfx >> sfy;
    x1 = x1 + (int)((float)(x1 - x1) * sfx);
    y1 = y1 + (int)((float)(y1 - y1) * sfy);
    x2 = x1 + (int)((float)(x2 - x1) * sfx);
    y2 = y1 + (int)((float)(y2 - y1) * sfy);
    x3 = x1 + (int)((float)(x3 - x1) * sfx);
    y3 = y1 + (int)((float)(y3 - y1) * sfy);
    setcolor(YELLOW);
    line(x1,y1,x2,y2);
    line(x2,y2, x3,y3);
    line(x3, y3, x1, y1);
    break;
default:
    cout<<"Invalid input";
    break;
}
getch();
closegraph();
return 0;
}
