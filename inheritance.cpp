#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Triangle
{
public:
    void triangle()
    {
        cout << "I am a triangle\n";
    }
};
class Description : public Triangle
{
public:
    void description()
    {
        cout << "In an isosceles triangle two sides are equal\n";
    }
    // Write your code here.
};

class Isosceles :  public Description
{
public:
    void isosceles()
    {
        cout << "I am an isosceles triangle\n";
    }
    // Write your code here.
};

int main()
{
    Isosceles isc;
    isc.isosceles();
    isc.description();
    isc.triangle();
    return 0;
}