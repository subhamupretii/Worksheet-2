#include <iostream>
using namespace std;

class Calculator {
public:
    int findMax(int a, int b)
    {
        return (a>b) ? a : b;
    }
    float findMax(float a, float b)
    {
        return (a>b) ? a : b;
    }
    int findMax(int a, int b, int c)
    {
        return (a>b) && (a>c) ? a : (b>a) && (b>c) ? : c;
    }
    float findMax(int a, float b)
    {
    return (a>b) ? a : b;
    }
};

int main()
{
    Calculator calc;
    int int1, int2, int3;
    float float1, float2;

    cout << "Enter details for Integer Comparison" << endl;
    cout << "Enter two integers: ";
    cin >> int1 >> int2;
    cout << "Max between " << int1 << " and " << int2 << ": " << calc.findMax(int1, int2) << endl;

    cout << "Enter value for Floating-Point Comparison" << endl;
    cout << "Enter two floating-point numbers: ";
    cin >> float1 >> float2;
    cout << "Max between " << float1 << " and " << float2 << ": " << calc.findMax(float1, float2) << endl;

    cout << "Enter value for Three Integer Comparison" << endl;
    cout << "Enter three integers: ";
    cin >> int1 >> int2 >> int3;
    cout << "Max among " << int1 << ", " << int2 << ", and " << int3 << ": " << calc.findMax(int1, int2, int3) << endl;

    cout << "Enter value for Mixed Comparison" << endl;
    cout << "Enter an integer and a floating-point number: ";
    cin >> int1 >> float1;
    cout << "Max between " << int1 << " and " << float1 << ": " << calc.findMax(int1, float1) << endl;

    return 0;
}