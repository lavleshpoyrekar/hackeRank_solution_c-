#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> v1;
  int element, size, i;

  cin >> size;

  for (i = 0; i < size; i++)
  {
    cin >> element;
    v1.push_back(element);
  }
  vector<int>::iterator it = v1.begin();
  sort(v1.begin(), v1.end());
  for (i = 0; i < size; i++)
  {
    cout << v1[i] << " ";
  }
  return 0;
}
