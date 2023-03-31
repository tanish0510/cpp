#include<iostream>
using namespace std;
class employee
{
    private:
    int a,b,c;

    public:
    int d, e;
    void getdata()
{
    cout<<"value of a is"<<a<<endl;
     cout<<"value of b is"<<b<<endl;
      cout<<"value of c is"<<c<<endl;
       cout<<"value of d is"<<d<<endl;
        cout<<"value of e is"<<e<<endl;

}
    void setdata(int a , int b, int c);
};

void employee :: setdata(int a1,int b1 ,int c1)
{
    a=a1;
    b=b1;
    c=c1;
}
int main ()
{
    employee tanish;
    tanish.d=7;
    tanish.e=6;
    tanish.setdata(1,2,4);
    tanish.getdata();
    return 0;
}