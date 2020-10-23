#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
clrscr();
float a,b,dist;
cout<<"enter the horizontal distance:";
cin>>a;
cout<<"enter the vertical distance:";
cin>>b;
dist=sqrt(pow(a,2)+pow(b,2));
cout<<"distance b/t two points is:"<<dist;
 getch() ;
}
