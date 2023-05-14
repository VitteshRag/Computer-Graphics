#include<iostream>
#include<graphics.h>

void DrawCircle(int centerx,int centery, int radius, int color)
{
    int x=radius;
    int y=0;
    int err=0;
    while(x>=y)
    {
        delay(5);
        putpixel(centerx+x,centery+y,color);
        putpixel(centerx+y,centery+x,color);
        putpixel(centerx-y,centery+x,color);
        putpixel(centerx-x,centery+y,color);
        putpixel(centerx-x,centery-y,color);
        putpixel(centerx-y,centery-x,color);
        putpixel(centerx+y,centery-x,color);
        putpixel(centerx+x,centery-y,color);
        if(err<=0)
        {
            y+=1;
            err+=2*y+1;
        }
        if(err>0)
        {
            x-=1;
            err-=2*x+1;
        }
    }
}
int main()
{
    initwindow(800,600,"Olumpic Rings Logo :");
    DrawCircle(200,200,100,BLUE);
    DrawCircle(350,200,100,WHITE);
    DrawCircle(500,200,100,RED);
    DrawCircle(275,300,100,YELLOW);
    DrawCircle(425,300,100,GREEN);
    getch();
    closegraph();
    return 0;
}
