#include <iostream>
#include <math.h>
#include <graphics.h>
#include <conio.h>
using namespace std;

int main()
{
  double k,p,n=360,d=360,s=360;

  int gd=DETECT, gm;
  struct arccoordstype a;
  struct arccoordstype f;
  struct arccoordstype h;

  initwindow(1530,800,"Soat");

  int t=765,b=400,x=465,y=400;

  while(1){
    setcolor(15);
    circle(765,400,350);
    circle(765,400,280);

    line(765,650,765,680);
    line(765,150,765,120);
    line(485,400,515,400);
    line(1045,400,1015,400);
    line(765,650,765,680);

    line(522,538,540,527);
    line(626,643,637,622);
    line(903,643,887,624);
    line(1008,538,990,528);
    line(1006,259,990,270);
    line(903,157,891,172);
    line(626,157,637,174);
    line(523,261,540,272);

    setcolor(YELLOW);
    settextstyle(4,0,3),
    outtextxy(755,620,"6");
    outtextxy(746,172,"12");
    outtextxy(537,393,"9");
    outtextxy(993,393,"3");
    outtextxy(665,330," @ Farrux @");

    setcolor(15);
    arc(t,b,n,n+1,200);
    getarccoords(&a);
    n-=5.999999833333333;

    line(t,b,a.xstart,a.ystart);

    arc(t,b,d,d+1,170);
    getarccoords(&f);

    line(t,b,f.xstart,f.ystart);
    d-=0.099999997;

    arc(t,b,s,s+1,140);
    getarccoords(&h);

    line(t,b,h.xstart,h.ystart);
    s-=0,0016666666666667;
    if(s<=0)
      s=360;
    if(d<=0)
      d=360;
    if(n<=0)
      n=360;
    delay(1000);
    cleardevice();
}
  getch();
  closegraph();
}
