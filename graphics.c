#include<graphics.h>
main()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");
    circle(100,80,20);
    closegraph();
}
