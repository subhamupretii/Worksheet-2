#include <iostream>
using namespace std;

class Student
{
private:
    string firstName, lastName;
    int a, b, c;
    float average, total, percentage;

public:
    void getdata()
    {
        cout << "Enter Student's First Name: ";
        cin >> firstName;
        cout << "Enter Student's Last Name: "<< endl;
        cin >> lastName;
        cout << "Enter marks for Maths: ";
        cin >> a;
        while (a < 0 || a > 100) 
        {
            cout << "Invalid marks for Maths! Kindly enter  value between 0 and 100: ";
            cin >> a;
        }
        cout << "Enter marks for Science: ";
        cin >> b;
        while (b < 0 || b > 100) 
        {
            cout << "Invalid marks for Science! Kindly enter  value between 0 and 100: ";
            cin >> b;
        }
        cout << "Enter marks for English: ";
        cin >> c;
        while (c < 0 || c > 100) 
        {
            cout << "Invalid marks for English! Kindly enter a value between 0 and 100: ";
            cin >> c;
        }
    }

    void calculate()
    {
        total = a + b + c;
        average = total / 3;
        percentage = (total / 300.0) * 100;
    }

    void display()
    {
        cout << firstName <<" "<< lastName << endl;
        cout << "Total marks obtained = " << total << endl;
        cout << "Average marks obtained = " << average << endl;
        cout << "Percentage = " << percentage << "%" << endl;

        if (percentage >= 90)
        {
            cout << "EXCELLENT :) YOU GOT  A+" << endl;
        }
        else if (percentage >= 80)
        {
            cout << "V GOOD :) YOU GOT A" << endl;
        }
        else if (percentage >= 70)
        {
            cout << "GOOD :) YOU GOT  B+" << endl;
        }
        else if (percentage >= 60)
        {
            cout << "AVERAGE :) YOU GOT B" << endl;
        }
        else
        {
            cout << "SO SAD :( YOU  FAILED" << endl;
        }
    }
};

int main()
{
    Student A;
    A.getdata();
    A.calculate();
    A.display();

    return 0;
}