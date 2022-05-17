#include<iostream>
using namespace std;
class sample
{
private:
int a;
public:
sample(int x);
sample(sample &A);
};
sample:: sample(int x)
{
a=x;
cout<<"a="<<a;
}
sample:: sample(sample &A)
{
a=A.a;
cout<<"a="<<a;
}
int main()
{
sample s(10);
sample s1=s;
}