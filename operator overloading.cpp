//Multilevel Inheritanqce//

#include<iostream>
using namespace std;

class unary
{
    private:
    int a,b,c;
    public:
    void get();
    void operator-();
    void show();
 };
void unary::get()
{
cout<<"enter a=";
cin>>a;
cout<<"enter b=";
cin>>b;
cout<<"enter c=";
cin>>c;

}
void unary:: operator-()
{
a=-a;
b=-b;
c=-c;
cout<<endl<<"*******"<<endl;
}
void unary:: show()
{
cout<<"a="<<a;
cout<<"b="<<b;
cout<<"c="<<c;

}
int main()
{
unary u;
u.get();
-u;
u.show();
}
