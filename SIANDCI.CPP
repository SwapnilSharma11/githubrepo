#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
clrscr();
float p,r,t,si=1,ci=1;
cout<<"enter principle,rate and time to find si:";
cin>>p>>r>>t;
si=(p*r*t);
cout<<"simple interest:"<<si<<endl;
cout<<"enter principle,rate and time to find ci:";
cin>>p>>r>>t;
ci= p*pow(((1+r)/100),t);
cout<<"compount interest:"<<ci;
getch();
}