#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>



using namespace std;
int main()
{
    vector<int>v1;
    int element,i,size;
    
    cin>>size;
   
    for ( i = 0; i < size; i++)
    {
      cin>>element; 
      v1. push_back(element); // enter element in vector
    }
    int q;
    cin>>q;
    for ( i = 0; i < q; i++)
    {
      int temp;
    vector<int> :: iterator it,it1;
    cin>>temp;
    it=lower_bound(v1.begin(),v1.end(),temp);
   
   
     if ((*it + 1) == temp || *it == temp)
    {
        cout << "Yes ";
        cout << it - v1.begin()+1<<endl;
    }
    else
       {cout<<"No "<<it- v1.begin()+1<<endl;}
     
 
}
    }

