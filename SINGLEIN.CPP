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
class demo1:public demo
{
public:
int b;
void display()
{
b=a*a;
cout<<"multiplication of no is"<<b;
}
};
void main()
{
clrscr();
demo1 d1;
d1.read();
d1.display();
getch();
}

