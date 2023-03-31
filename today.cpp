employee class
#include<iostream>
using namespace std;
class Employee
{
    protected:
    int emp_id;
    string empname, city, mail_id;
    long int mob_no;
    float basic_sal=0, gross_sal=0, net_sal=0;
    float DA=0, HRA=0, PF=0, SCF=0;
    public:
    void accept();
    void display();

};
void Employmee::accept()
{
    cout<<"\n Employee name : ";
    cin>>empname;
    cout<<"\n Employee city : ";
    cin>>city;
    cout<<"\n Employeee Email : ";
    cin>>mail_id;
    cout<<"Employee Contact : ";
    cin>>mob_no;
    
}