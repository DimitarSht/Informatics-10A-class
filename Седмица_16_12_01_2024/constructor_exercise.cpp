#include<iostream>
#include<cmath>
using namespace std;
class Point
{
private:
    char name;
    int x;
    int y;

public:
    Point()
    {
        name = 'O';
        x = 0;
        y = 0;
    }
    Point(char newName, int newX, int newY)
    {
        name = newName;
        x = newX;
        y = newY;
    }
    Point(const Point &other)
    {
        if(this != &other)
        {
            name = other.name;
            x = other.x;
            y = other.y;
        }
    }
    void setName(char newName)
    {
        name = newName;
    }
    char getName()
    {
        return name;
    }
    void setX(int newX)
    {
        x = newX;
    }
    int getX()
    {
        return x;
    }
    void setY(int newY)
    {
        y = newY;
    }
    int getY()
    {
        return y;
    }
    double distance()
    {
        return sqrt(x*x + y*y);
    }
    double distanceP(const Point &point)
    {
        return sqrt(abs(point.x + x)+ point.y*point.y);
    }
};

class Cicle
{
private:
    int radius;
    int CenterX;
    int CenterY;

public:
    /*
    Circle()
    {
        radius = 1;
        CenterX = 0;
        CenterY = 0;
    }
    Circle(int newRadius, int newX, int newY)
    {
        radius = newRadius;
        CenterX = newX;
        CenterY = newY;
    }
    Circle(const Circle &other)
    {
        if(this != &other)
        {
            radius = other.radius;
            CenterX = other.CenterX;
            CenterY = other.CenterY;
        }
    }*/
    void setRadius(int newRadius)
    {
        radius = newRadius;
    }

};



int main()
{
    Point A;
    A.setName('A');
    cout<<A.getName();


    /// Point A('A', 0, 1);
    /*Point A = Point('A',0,1);
    Point B = Point(A);
    B.setName('B');
    B.setY(-1);
    cout<<B.getName()<<" "<<B.getX()<<" "<<B.getY()<<endl;
    cout<<B.distance();
    */
    return 0;
}
