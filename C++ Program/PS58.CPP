#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
void main()
{
int j,x,y,kk,i,gd=DETECT,gm;
char a[5];
initgraph(&gd,&gm,"c:\\tc\\bgi");
setcolor(WHITE);
line(0,400,640,400);
rectangle(300,330,340,400);
rectangle(310,320,330,330);
setcolor(4);
line(319,280,21,398);
line(320,280,320,398);
rectangle(320,280,330,300);
outtextxy(240,380,"press any key to ignight the rocket");
getch();
for(j=400;j<=640;j++)
{
cleardevice();
setcolor(WHITE);
line(0,j,640,j);
rectangle(300,j-70,340,j);
rectangle(310,j-80,330,j-70);
setcolor(RED);
line(319,280,319,400);
line(320,280,320,400);
rectangle(320,280,320,300);
setcolor(YELLOW);
circle(325,302,2);
delay(5);
}
for(i=400;i>=300;i--)
{
cleardevice();
setcolor(RED);
line(319,i,319,i-120);
line(320,i,320,i-120);
rectangle(320,i-120,330,i-100);
setcolor(YELLOW);
circle(325,i-100,2);
delay(25);
}
cleardevice();
kk=0  ;
for(j=100;j<=350;j++)
{
if(j%20==0)
{
setcolor(kk);
kk=kk+3;
delay(300 );
}
ellipse(320,30,0,360,j+100,j+0);
}
for(j=100;j<350;j++)
{
if(j%20==0)
{
setcolor(BLACK);
delay(200);
}
ellipse(320,30,0,360,j+100,j+0);
}
cleardevice();
for(i=0;i<=70;i++)
setcolor(i);
settextstyle(GOTHIC_FONT,HORIZ_DIR,6);
outtextxy(110,150,"HAPPY NEW YEAR");
delay(300);
getch();


}
getch();
