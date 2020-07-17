#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
float u,v,t,s;
cout<<"enter the initial velocity:";
cin>>u;
cout<<"enter the final velocity:";
cin>>v;
cout<<"enter the time:";
cin>>t;
s=(v-u)/t;
cout<<"speed is:"<<s;
getch();
}