#include <iostream>
using namespace std;
class Rectangle
{

public:
    int w, h;
    void display()
    {
        cout << w << " " << h << endl;
    }
};
class RectangleArea : public Rectangle
{
private:
    int area, x;

public:
    void read_input()
    {
        cin >> w;
        cin >> h;
    }
    void display()
    {
        x = w * h;
        cout << x;
    }
};

int main()
{

    RectangleArea r_area;

    /*
     * Read the width and height
     */
    r_area.read_input();

    /*
     * Print the width and height
     */
    r_area.Rectangle::display();

    /*
     * Print the area
     */
    r_area.display();

    return 0;
}