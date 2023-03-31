#include <iostream>
using namespace std;
class Employee
			{
			protected:
					int empid;
					string empfname,emplname,address,mail;
					long int mobileno;
					float basicpay,totalsalary,gross,da,hra,pf,scf;
			public:
					void getdata();
					void showdata();
			};		
void Employee::getdata()
	{
		cout<<"\nEmployee ID:- ";
		cin>>empid;
		cout<<"\nEnter first name :";
		cin>>empfname;
		cout<<"\nEnter last name :";
		cin>>emplname;
		cout<<"\nEnter address :";
		cin>>address;
		cout<<"\nEnter Mail :";
		cin>>mail;
		cout<<"\nEnter Contact Number :";
		cin>>mobileno;
		
	}


void Employee::showdata()
	{
		cout<<"\nEMP number:- "<<empid;
		cout<<"\nfirst name :"<<empfname;
		cout<<"\nlast name :"<<emplname;
		cout<<"\ncity :"<<address;
		cout<<"\nMails :"<<mail;
		cout<<"\nmobile Number :"<<mobileno;
		
	}	

class programmer : public Employee
{

public:
 	void calsalary()
 	{
 		getdata();
 		cout<<"\nEnter basicsalary of progammer :";
		cin>>basicpay;
 		da=0.97*basicpay;
		hra=0.1*basicpay;
		pf=0.12*basicpay;
		scf=0.001*basicpay;
		gross=da+hra+pf+scf;
		totalsalary=gross-(0.15*gross);
		showdata();
		cout<<"\nBasic Salary of Employee is:- "<<basicpay ;
		cout<<"\nGross Salary of Employee is:- "<<gross ;
		cout<<"\nTotal Salary of Employee is:- "<<totalsalary ;
		
	}							
 	
};

class teamlead : public Employee
{

public:
 	void calsalary()
 	{
 		getdata();
 		cout<<"\nEnter basicsalary of teamlead :";
		cin>>basicpay;
 		da=0.97*basicpay;
		hra=0.1*basicpay;
		pf=0.12*basicpay;
		scf=0.001*basicpay;
		gross=da+hra+pf+scf;
		totalsalary=gross-(0.15*gross);
		showdata();
		cout<<"\nBasic Salary of Employee is:- "<<basicpay ;
		cout<<"\nGross Salary of Employee is:- "<<gross ;
		cout<<"\nTotal Salary of Employee is:- "<<totalsalary ;
		
	}							
 	
};

class ASpm : public Employee
{

public:
 	void calsalary()
 	{
 		getdata();
 		cout<<"\nEnter basicsalary of assistant project manager :";
		cin>>basicpay;
 		da=0.97*basicpay;
		hra=0.1*basicpay;
		pf=0.12*basicpay;
		scf=0.001*basicpay;
		gross=da+hra+pf+scf;
		totalsalary=gross-(0.20*gross);
		showdata();
		cout<<"\nBasic Salary of Employee is:- "<<basicpay ;
		cout<<"\nGross Salary of Employee is:- "<<gross ;
		cout<<"\nTotal Salary of Employee is:- "<<totalsalary ;
		
	}							
 	
};
class PM : public Employee
{

public:
 	void calsalary()
 	{
 		getdata();
 		cout<<"\nEnter basicsalary of Project Manager :";
		cin>>basicpay;
 		da=0.97*basicpay;
		hra=0.1*basicpay;
		pf=0.12*basicpay;
		scf=0.001*basicpay;
		gross=da+hra+pf+scf;
		totalsalary=gross-(0.24*gross);
		showdata();
		cout<<"\nBasic Salary of Employee is:- "<<basicpay ;
		cout<<"\nGross Salary of Employee is:- "<<gross ;
		cout<<"\nTotal Salary of Employee is:- "<<totalsalary ;
		
	}							
 	
};

int main()
{
		cout<<"\n***********************************";
		cout<<"\nEMPLOYEE SALARY MANAGEMENT SYSTEM";
		cout<<"\n***********************************";

		cout<<"\n***********************************";
		cout<<"\nENTER EMPLOYEE INFROMATION FOR PROGRAMMER";
		cout<<"\n***********************************";
		
		programmer p1;
		p1.calsalary();
		
		
		cout<<"\n***********************************";
		cout<<"\nENTER EMPLOYEE INFROMATION FOR TEAMLEAD";
		cout<<"\n***********************************";
		
		teamlead t1;
		t1.calsalary();

        cout<<"\n***********************************";
		cout<<"\nENTER EMPLOYEE INFROMATION FOR ASIISTANT PROJECT MANAGER";
		cout<<"\n***********************************";
		
		ASpm A1;
		A1.calsalary();

        cout<<"\n***********************************";
		cout<<"\nENTER EMPLOYEE INFROMATION FOR PROJECT MANAGER";
		cout<<"\n***********************************";
		
		PM B1;
		B1.calsalary();

		cout<<"\nEnd of the program."<<endl;
		return 0;
}
























