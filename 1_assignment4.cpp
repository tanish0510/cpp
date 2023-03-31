#include<iostream>
using namespace std;
class employee
{
  protected:
          string f_name,l_name;
          int SSN;
          int weekly_salary=7000, wage_hourly=100, gross_sales, hours;
          float commission_rate=0.2, net_sal;
  public:
          void getdata();
          void showdata();
          virtual void earnings()=0;
  
};
class salaried_employees : public employee
{
  public:
          void earnings()
          {
            cout<<"Enter details of salaried employee: "<<endl;
            getdata();
            cout<<endl<<"SALARIED EMPLOYEE INFORMATION IS AS FOLLOWS: "<<endl;
            showdata();
            net_sal=weekly_salary;
            cout<<"Weekly Salary of programmer is: "<<net_sal<<endl;
          }
};
class commission_employees : public employee
{
  public:
          void earnings()
          {
            cout<<"Enter details of Commissioned Employee: "<<endl;
            getdata();
            cout<<endl<<"Enter the gross sales of the employee: ";
            cin>>gross_sales;
            net_sal=commission_rate*gross_sales;
            cout<<endl<<"COMMISSIONED EMPLOYEE INFORMATION IS AS FOLLOWS: "<<endl;
            showdata();
            cout<<"Salary of Commissioned Employee is: "<<net_sal<<endl;
          }
};
class hourly_employees : public employee
{
  public:
          void earnings()
          {
            cout<<"Enter details of Hourly Employee: "<<endl;
            getdata();
            cout<<endl<<"Enter the hours of the employee: ";
            cin>>hours;
            net_sal=hours*wage_hourly;
            cout<<endl<<"HOURLY EMPLOYEE INFORMATION IS AS FOLLOWS: "<<endl;
            showdata();
            cout<<"Salary of hourly employee is: "<<net_sal<<endl;
          }
};

void employee::getdata()
{
  cout<<"Enter SSN No.: ";
  cin>>SSN;
  cout<<endl<<"Enter first name of the employee: ";
  cin>>f_name;
  cout<<endl<<"Enter last name of the employee: ";
  cin>>l_name;
  cout<<endl;
}
void employee::showdata()
{
   cout<<"SSN: "<<SSN<<endl;
   cout<<"Name of the employee is: "<<f_name<<" "<<l_name<<endl;
   
}
int main()
{
cout<<"****************"<<endl;
cout<<"  EMPLOYEE PAYROLL CALCULATION SYSTEM OF TCS"<<endl;
cout<<"****************"<<endl;
employee *e1,*e2,*e3;
salaried_employees s1;
commission_employees c1;
hourly_employees h1;
e1=&s1;
e2=&c1;
e3=&h1;
e1->earnings();
e2->earnings();
e3->earnings();
cout<<endl<<"END OF THE CODE"<<endl;
return 0;
}