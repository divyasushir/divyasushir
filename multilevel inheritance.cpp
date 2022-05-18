//Multilevel Inheritanqce//

#include<iostream>
using namespace std;

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
    void read_b()
    {
        b=10;
    }
};
class demo2:public demo1
{
    public:
    int c;
    void display()
    {
        c=a*b;
        cout<<c;
    }
};

int main()
{

	demo2 d;
	d.read();
	d.read_b();
	d.display();

	return(0);
	
}