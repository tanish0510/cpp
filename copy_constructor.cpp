// Name :Tanish Seth
// Subject-> CPP code
#include<iostream>
using namespace std;
//Start your code now 
class number
{
    int a;
    public:
    number(){
        a=0;
    };
    number(int num)
    {
        a=num;
    }
    number(number &obj)
    {
        cout<<"copy constructor called"<<endl;
        a=obj.a;
    }
    void display()
    {
        cout<<"the number for this object is"<<a<<endl;
    }
};
int main()
{
 number x,y,z(45);
 x.display();
 y.display();
 z.display();
 number z1(z);
 z1.display();
return 0;
}