#include<iostresam.h>
#include<conio.h>
class demo
{
public:
int a,b;
void show()
{
 cout<<"simple function\n";
}
void show(int x)
{
cout<<"\nvalue="<<x;
}
void show(int j, int k)
{
a=j;
b=k;
cout<<"\n";
cout<<a+b;
}
};
void main()
{
clrscr();
demo d1;
d1.show();
d1.show(5);
d1.show(6,7);
getch();
}


