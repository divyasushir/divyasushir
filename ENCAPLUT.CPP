#include<iostream.h>
#include<conio.h>
class stud
{
private:
int m1,m2,rollno,total;
float avg;
char name[20];
public:
void get();
void put();
};
void stud::get()
{
   cout<<"\Enter the Roll Number:-";
   cin>>rollno;
   cout<<"\nEnter Name:-";
   cin>>name;
   cout<<"\nEnter marks in sub1:-";
   cin>>m1;
   cout<<"\nEnter marks in sub2:-";
   cin>>m2;
}
void stud::put()
{
total=0;
total=m1+m2;
avg=total/2;
cout<<"\n";
cout<<"\noutput is:-" ;
cout<<"\nRoll No:=";
cout<<rollno;
cout<<"\nName:=";
cout<<name;
cout<<"mark in sub1:=";
cout<<m1;
cout<<"mark in sub2:=";
cout<<m2;
cout<<"toal marks=";
cout<<total;
cout<<"\nAvrage=";
cout<<avg;

}
void main()
{
clrscr();
stud s;
s.get();
s.put();
getch();
}
