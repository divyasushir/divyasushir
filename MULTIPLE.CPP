#include<iostream.h>
#include<conio.h>
class demo
{
public:
int a;
void read()
{
cout<<"Enter the number=";
cin>>a;
}
};
class demo1
{
public:
int b;
void read_1()
{
cout<<"Enter the second no=";
cin>>b;
}
} ;
class demo2 : public demo, public demo1
{
public:
int k;
void mul()
{
k=a*b;
cout<<"Multiplication is="<<k;
}
};
void main()
{
clrscr();
demo2 d1;
d1.read();
d1.read_1();
d1.mul();
getch();

}