#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
class shape
{
  protected:
   int dimension1;
   int dimension2;
   float area;
  public:
          void getdata();
          void showdata();
        
        virtual void cal_area()=0;
  
};
class rectangle : public shape
{
  public:
          void cal_area()
          {
            cout<<"Enter dimension: "<<endl;
            getdata();
            cout<<endl<<"AREA INFO IS: "<<endl;
            area=dimension1*dimension2;
            showdata();
            cout<<"Area "<<area<<endl;
          }
};
class triangle : public shape
{
  public:
          void cal_area()
          {
            cout<<"Enter Dimension: "<<endl;
            getdata();
            cout<<endl<<"Area info is: ";
            area=0.5*dimension1*dimension2;
            showdata();
            cout<<"Area of the triangle is: "<<area<<endl;
          }
};
class circle : public shape
{
  public:
          void cal_area()
          {
            cout<<"Enter Dimensions: "<<endl;
            getdata();
            cout<<endl<<"Area info is: ";
            area=3.14*dimension1*dimension1;
            showdata();
            cout<<"Area of the cIRCLE IS: "<<area<<endl;
          }
};

void shape::getdata()
{
  cout<<"Dimension 1: ";
  cin>>dimension1;
  cout<<endl<<"Enter Dimension 2: ";
  cin>>dimension2;
  cout<<endl;
}
void shape::showdata()
{
   cout<<"Dimension 1: "<<dimension1<<endl;
   cout<<"dimension 2: "<<dimension2<<endl;
   
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

void shape::cal_area()
{
}
