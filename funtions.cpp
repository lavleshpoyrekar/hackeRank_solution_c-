#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int max_of_four(int a, int b, int c, int d);
    {

        if (a > b)
        {
            if (a > c)
            {
                if (a > d)
                {
                    cout << a;
                }
                else
                {
                    cout << d;
                }
            }
            else
            {
                c > d ? cout << c : cout << d;
            }
        }
        else
        {
            if (b > c)
            {
                if (b > d)
                {
                    cout << b;
                }
                else
                {
                    cout << d;
                }
            }
            else
            {
                c > d ? cout << c : cout << d;
            }
        }
    }

    return 0;
}
