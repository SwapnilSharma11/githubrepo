#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
clrscr();
float r,vol;
cout<<"Enter radius of sphere:";
cin>>r;
vol= (4*3.14*pow(3,r))/3;
cout<<"vol of sphere is:"<<vol;
getch();
}
