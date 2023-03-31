// Name :Tanish Seth
// Subject-> CPP code
#include<iostream>
using namespace std;
//Start your code now 
class shape
{
    protected:
    int dim1;
    int dim2;
    public:
    void getdata();
    void showdata();
    
    void cal_area();
};
void shape::getdata()
{
    cout<<"dim 1"<<endl;
    cin>>dim1;
    cout<<"dim 2"<<endl;
    cin>>dim2;
}
class circle : public shape
{
  public:
          void cal_area()
          {
            cout<<"Enter Dimensions: "<<endl;
            getdata();
            cout<<endl<<"Area info is: ";
            int area=3.14*dim1*dim1;
            showdata();
            cout<<"Area of the cIRCLE IS: "<<area<<endl;
          }
};

class rectangle : public shape
{
  public:
          void cal_area()
          {
            cout<<"Enter Dimensions: "<<endl;
            getdata();
            cout<<endl<<"Area info is: ";
            int area=dim1*dim1;
            showdata();
            cout<<"Area of the reactangle IS: "<<area<<endl;
          }
};
class triangle : public shape
{
  public:
          void cal_area()
          {
            cout<<"Enter Dimensions: "<<endl;
            getdata();
            cout<<endl<<"Area info is: ";
            int area=0.5*dim1*dim2;
            showdata();
            cout<<"Area of the triangle IS: "<<area<<endl;
          }
};
void shape::showdata()
{
    cout<<"dim 1 is"<<dim1<<endl;
    cout<<"dim 2 is"<<dim2<<endl;
}
int main()
{
 
cout<<"**********************************************"<<endl;
cout<<"  Area Calculation Program "<<endl;
cout<<"**********************************************"<<endl;
shape *s1,*s2,*s3;
rectangle r1;
triangle t1;
circle c1;
s1=&r1;
s2=&t1;
s3=&c1;
s1->cal_area();
s2->cal_area();
s3->cal_area();
cout<<endl<<"END OF THE CODE"<<endl;
return 0;
}
