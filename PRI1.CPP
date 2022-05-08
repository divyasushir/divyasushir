#include<iostream.h>
#include<conio.h>
class prime
{
public:
int i,n,c;
void read();
void display();
};
void prime::read()
{
cout<<"Enter The Number:=";
cin>>n;
c=0;
}
void prime::display()
{
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
c=c+1;
}
}
if (c==0)
{
cout<<"prime no";
}
else
{
cout<<"No is not prime";
}
}

void main()
{
clrscr();
prime p1;
p1.read();
p1.display();
getch();
}
