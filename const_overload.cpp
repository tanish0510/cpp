#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    void printnumber()
    {
        cout << "your number is:\t" << a << "+" << b << "i" << endl;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
};

int main()
{
    complex c1(1, 5);
    c1.printnumber();
    complex c2(8);
    c2.printnumber();
    return 0;
}
