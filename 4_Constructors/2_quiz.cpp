#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "The point is : (" << x << " , " << y << ")" << endl;
    }
    friend double distance(Point, Point);
};
double distance(Point p1, Point p2)
{
    double res = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
    return res;
}

int main()
{
    Point p(0, 6);
    p.displayPoint();

    Point q(0, 9);
    q.displayPoint();

    double result = distance(p, q);
    cout <<"The distance between x and y is : "<< result << endl;

    return 0;
}