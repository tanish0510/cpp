#include<iostream>
using namespace std;

class complex{
int a,b;
public:
complex(void); //comstructor declaration
void printdata()
{
    cout<<"Your number is"<<a<<" + "<<b<<"i"<<endl;
}
};

complex::complex(void)//constructor initialisation
{
    a=0;
    b=0;
}

int main()
{
    complex c1,c2,c3;
    c1.printdata();
    c2.printdata();
    c3.printdata();
    return 0;

}
