#include <iostream>
using namespace std;

// Create the classes here
class Shape
{
public:
    int length;
    int breadth;

    void setlength(int length1)
    {
        length = length1;
    }

    void setbreadth(int breadth1)
    {
        breadth = breadth1;
    }
};
class Square : public Shape
{
public:
    void calculateArea(int a, int b)
    {
        int area = a * b;
        cout << "area" << endl
             << area << endl;
    }
};
class Rectangle : public Shape
{

public:
    int calculateArea(int a, int b)
    {
        int area = a * b;
        cout << "area of rectangle is" << area << endl;
    }
};

int main()
{
    Square first;
    first.calculateArea(5, 5);

    // Write your code here
    Rectangle first1;
    first1.calculateArea(5, 4);
    return 0;
}