#include <iostream>
using namespace std;

class Circle
{
private:
    float Radius, Area;

public:

Circle()
{
    Radius = 0;
    Area = 0;
}
    void getdata()
    {
        cout << "Enter Radius: ";
        cin >> Radius;
    }

    void calculate()
    {
        Area = 3.14*Radius*Radius;
    }

    void display()
    {
        cout << "Area of circle = " << Area << endl;

    }

    friend void compareTwoCircles(Circle &circle1, Circle &circle2);
};

void compareTwoCircles(Circle &circle1, Circle &circle2)
{
    if (circle1.Area > circle2.Area)
        cout << "Circle 1 has the larger area." << endl;
    else if (circle1.Area < circle2.Area)
        cout << "Circle 2 has the larger area." << endl;
    else
        cout << "Both circles have the same area." << endl;
}

int main()
{
    Circle A, B;

    cout << "Enter value for Circle 1" << endl;
    A.getdata();
    A.calculate();
    cout << "Enter value for Circle 2" << endl;
    B.getdata();
    B.calculate();
    cout << "Area of circle 1"<< endl;
    A.display();
    cout << "Area of circle 2"<< endl;
    B.display();
    compareTwoCircles(A, B);

    return 0;
}