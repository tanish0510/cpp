#include<iostream>
#include<string>
using namespace std;
class binary
{
    string s;
public:
void getdata();
void check_binary();
void convert_binary();
void display();
};

//Get Data
void binary :: getdata(void)
{
    cout<<"Enter a binary number:\n"<<endl;
    cin>>s;
}

//Checking binary
void binary:: check_binary(void)
{
    for(int i=0; i<s.length();i++)
    {
        if(s.at(i)!='0' || s.at(i)!='0')
        {
            cout<<"Invalid Binary Entry"<<endl;
        }

    }
}

//Converting Binary
void binary :: convert_binary(void)
{
    for(int i=0; i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
    }   
}


//Displaying Answer
void binary :: display(void)
{
    cout<<"Displaying your binary number:"<<endl;
    for(int i=0; i<s.length();i++)
    {
        cout<<s.at(i)<<endl;
    }
}


//Main Function
int main()
{
    binary b;
    b.getdata();
    b.check_binary();
    b.display();
    b.convert_binary();
    b.display();
}
