#include<iostream.h>
#include<conio.h>
class base
{
public:
virtual void print()
{
cout<<"Print base class\n";
}
};
class derived: public base
{
public:
void print()
{
cout<<"print derived class\n";
}
};
void main()
{
clrscr();
base *b;
base b1;
b= &b1;
b->print();
derived d;
d.print();
getch();
}