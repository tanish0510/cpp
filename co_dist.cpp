#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int x, y;
    friend void distance(point p1, point p2);

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }

    void printnumber()
    {
        cout << "the points are"
             << "(" << x << "," << y << ")" << endl;
    }
};
void distance(point p1, point p2)
{
    int distance;
    distance = ((p2.x - p1.x) * (p2.x - p1.x) - (p2.y - p1.y) * (p2.y - p1.y));
    distance = sqrt(distance);
    cout << "the distance is" << distance << endl;
}
int main()
{
    point p1(1, 5);
    p1.printnumber();
    point p2(4, 7);
    p2.printnumber();
    distance(p1, p2);
    return 0;
    
}