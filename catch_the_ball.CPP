#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
void flood_fill(int x,int y,int o,int n);
void main()
{
   int i,x=30;
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
   delay(1000);
   for(i=0;i<7;i++)
   {
   line(200, 400, 230, 400);
   line(200,400,190,350);
   line(230,400,240,350);
   circle(215,50+x,15);
   flood_fill(215,50+x,0,1);
   circle(265,80+x,15);
   flood_fill(265,80+x,0,2);
   circle(315,20+x,15);
   flood_fill(315,20+x,0,4);
   circle(215,110+x,15);
   flood_fill(215,110+x,0,1);
   x=x+30;
   delay(500);
   cleardevice();
   }

   line(200, 400, 230, 400);
   line(200,400,190,350);
   line(230,400,240,350);
   circle(215,290,15);
   flood_fill(215,290,0,1);
   circle(265,320,15);
   flood_fill(265,320,0,2);
   circle(315,260,15);
   flood_fill(315,260,0,4);
   circle(215,385,15);
   flood_fill(215,385,0,1);
   delay(500);
   cleardevice();

   line(200, 400, 230, 400);
   line(200,400,190,350);
   line(230,400,240,350);
   circle(215,290,15);
   flood_fill(215,290,0,1);
   circle(265,320,15);
   flood_fill(265,320,0,2);
   circle(315,260,15);
   flood_fill(315,260,0,4);
   delay(500);
   cleardevice();

   line(250, 400, 280, 400);
   line(250,400,240,350);
   line(280,400,290,350);
   circle(215,290,15);
   flood_fill(215,290,0,1);
   circle(265,320,15);
   flood_fill(265,320,0,2);
   circle(315,260,15);
   flood_fill(315,260,0,4);
   delay(500);
   cleardevice();


   line(250, 400, 280, 400);
   line(250,400,240,350);
   line(280,400,290,350);
   circle(215,320,15);
   flood_fill(215,320,0,1);
   circle(265,385,15);
   flood_fill(265,385,0,2);
   circle(315,290,15);
   flood_fill(315,290,0,4);
   delay(500);
   cleardevice();

   line(250, 400, 280, 400);
   line(250,400,240,350);
   line(280,400,290,350);
   circle(215,320,15);
   flood_fill(215,320,0,1);
   circle(315,290,15);
   flood_fill(315,290,0,4);
   delay(500);
   cleardevice();

   line(200, 400, 230, 400);
   line(200,400,190,350);
   line(230,400,240,350);
   circle(215,320,15);
   flood_fill(215,320,0,1);
   circle(315,290,15);
   flood_fill(315,290,0,4);
   delay(500);
   cleardevice();

   line(200, 400, 230, 400);
   line(200,400,190,350);
   line(230,400,240,350);
   circle(215,385,15);
   flood_fill(215,385,0,1);
   circle(315,320,15);
   flood_fill(315,320,0,4);
   delay(500);
   cleardevice();

   line(200, 400, 230, 400);
   line(200,400,190,350);
   line(230,400,240,350);
   circle(315,320,15);
   flood_fill(315,320,0,4);
   delay(500);
   cleardevice();

   line(250, 400, 280, 400);
   line(250,400,240,350);
   line(280,400,290,350);
   circle(315,320,15);
   flood_fill(315,320,0,4);
   delay(500);
   cleardevice();


   line(300, 400, 330, 400);
   line(300,400,290,350);
   line(330,400,340,350);
   circle(315,320,15);
   flood_fill(315,320,0,4);
   delay(500);
   cleardevice();

   line(300, 400, 330, 400);
   line(300,400,290,350);
   line(330,400,340,350);
   circle(315,385,15);
   flood_fill(315,385,0,4);
   delay(500);
   cleardevice();

   line(300, 400, 330, 400);
   line(300,400,290,350);
   line(330,400,340,350);

   /* clean up */
   getch();
   closegraph();

}
void flood_fill(int x,int y,int o,int n)
{
if(getpixel(x,y)==o)
{
putpixel(x,y,n);
flood_fill(x+1,y,o,n);
flood_fill(x-1,y,o,n);
flood_fill(x,y+1,o,n);
flood_fill(x,y-1,o,n);
}
}
