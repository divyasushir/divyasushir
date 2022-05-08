#include<iostream.h>
#include<conio.h>
class demo
{
public:
int a,b;
void read()
{
a=10;
b=20;
}
};
class demo1:public demo
{
public:
int c;
void display()
{
c=a+b;
cout<<"\nAddition is="<<c;
}
};
class demo2:public demo
{
public:
int d;

void display1()
{
d=a*b;
cout<<"\nmultiplication is="<<d;
}
} ;
void main()
{
clrscr();
demo1 d1;
d1.read();
d1.display();
demo2 d2;
d2.read();
d2.display1();
getch();
}
