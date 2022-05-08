#include<iostream.h>
#include<conio.h>
class fri
{
int a;
public:
void get();
friend void show(fri a1);
};
void fri::get()
{
cout<<"Enter the number=";
cin>>a;
}
void show(fri a1)
{
cout<<"calling private data of class fri";
cout<<a1.a;
}
int main()
{
clrscr();
fri f1;
f1.get();
show(f1);
getch();
}