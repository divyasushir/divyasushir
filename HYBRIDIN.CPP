#include<iostream.h>
#include<conio.h>
class demo
{
public:
int a;
void read()
{
a=10;
}
};
class demo1
{
public:
int b;
void read2()
{
b=20;
}
};
class add: public demo,public demo1
{
public:
int c;
void display()
{
c=a+b;
cout<<"Addition of two no is="<<c;
}
};
class mul:public demo
{
public:
int d;
void display2()
{
d=a*a;
cout<<"Multiplication is="<<d;
}
};
void main()
{
clrscr();
add a1;
a1.read();
a1.read2();
a1.display();
mul m1;
m1.read();
m1.display2();
getch();
}