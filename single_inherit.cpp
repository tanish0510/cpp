// Name :Tanish Seth
// Subject-> CPP code
#include <iostream>
using namespace std;
// Start your code now
class base
{
    int data1;

public:
    int data2;
    void setdata();
    void getdata1();
    void getdata2();
};
void base::setdata()
{
    data1 = 10;
    data2 = 20;
}
int base::getdata1()
{
    return data1;
}
int base::getdata2()
{
    return data2;
}
class derived :: public base{
    private:
     int data3;
public:
    void process();
    void display(){}
};
void derived::process()
{
    data3 = data2 * getdata1();
}
void derived::display()
{
    cout << "value of data 1 is" << getdata1() << endl;
    cout << "value of data 2 is" << data2 << endl;
    cout << "value of data 3 is" << data3 << endl;
}
int main()
{
    derived der;
    der.setdata();
    der.process();
    der.display();
    return 0;
}

