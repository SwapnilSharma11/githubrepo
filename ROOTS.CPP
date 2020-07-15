#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
clrscr();
float a,b,c,root1=0,root2=0;
cout<<"quadratic eq : ax^2+bx+c \n";
cout<<"enter coefficient of a,b and c:";
cin>>a>>b>>c;
root1= (-b+sqrt(pow(b,2)-4*(a*c)))/(2*a);
root2= (b+sqrt(pow(b,2)-4*(a*c)))/(2*a);
cout<<"roots of equation is "<<root1<<","<<root2;
getch();
}