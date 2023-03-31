// Name :Tanish Seth
// Subject-> CPP code
#include <iostream>
using namespace std;
// Start your code now
class bankdeposit
{
    int principle;
    int years;
    float rate;
    float returnvalue;

public:
bankdeposit(){}
    bankdeposit(int p, int y, float r);
    bankdeposit(int p, int y, int r);
    void show();
};


bankdeposit::bankdeposit(int p, int y, int r)
{
    principle = p;
    years = y;
    rate = r;
    returnvalue=0;
    
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + rate);
    }
}
bankdeposit::bankdeposit(int p, int y, float r)
{
    principle = p;
    years = y;
    rate = float(r)/100;
    returnvalue = 0;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + r);
    }
}

void bankdeposit::show()
    {
        cout << endl<< "principle amount was" << principle;
        cout << "years invested" << years << endl;
        cout << "interest rate" << rate << endl;
        cout << "return value" << returnvalue << endl;
    }

int main()
{
    bankdeposit bd1, bd2;
    int p, y, R;
    float r;
    cout << "enter the value of p,y,r" << endl;
    cin >> p >> y >> r;
    bd1 = bankdeposit(p, y, r);
    bd1.show();
    return 0;
}