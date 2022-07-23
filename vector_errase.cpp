#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<double> v1;
    double element, size, i, n, a, b, c, p;

    cin >> size;

    for (i = 0; i < size; i++)
    {
        cin >> element;
        v1.push_back(element);
    }

    cin >> a;
    v1.erase(v1.begin() + a - 1);
    p = v1.size();
    for (i = 0; i < p; i++)
    {
        cout << v1[i] << " ";
    }
    cin >> b >> c;
    v1.erase(v1.begin() + b - 1, v1.begin() + c - 1);
    n = v1.size();
    cout << n << endl;
    for (i = 0; i < n; i++)
    {
        cout << v1[i] << " ";
    }
    return 0;
}
