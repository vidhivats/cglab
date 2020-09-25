#include<stdio.h>  \par
#include<graphics.h>  \par
#include<math.h> \par
#include<conio.h> \par
main()  \par
\{  \par
    int gd=0,gm,x1,y1,x2,y2,x3,y3;  \par
    double s,c, angle;  \par
    initgraph(&gd, &gm, "C:\\\\TURBOC3\\\\BGI");  \par
    setcolor(RED);  \par
    printf("Enter coordinates of triangle: ");  \par
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2, &x3, &y3);  \par
    setbkcolor(WHITE);  \par
    cleardevice();  \par
    line(x1,y1,x2,y2);  \par
    line(x2,y2, x3,y3);  \par
    line(x3, y3, x1, y1);  \par
    getch();  \par
    setbkcolor(BLACK);  \par
    printf("Enter rotation angle: ");  \par
    scanf("%lf", &angle);  \par
    setbkcolor(WHITE);  \par
    c = cos(angle *M_PI/180);  \par
    s = sin(angle *M_PI/180);  \par
    x1 = floor(x1 * c + y1 * s);  \par
    y1 = floor(-x1 * s + y1 * c);  \par
    x2 = floor(x2 * c + y2 * s);  \par
    y2 = floor(-x2 * s + y2 * c);  \par
    x3 = floor(x3 * c + y3 * s);  \par
    y3 = floor(-x3 * s + y3 * c);  \par
    cleardevice();  \par
    line(x1, y1 ,x2, y2);  \par
    line(x2,y2, x3,y3);  \par
    line(x3, y3, x1, y1);  \par
    getch();  \par
    closegraph();  \par
    return 0;  \par
    getch();\par
\}\par
}