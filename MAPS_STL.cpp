#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    map<string,int>m1;
    int n,q,i,y;
    string x;
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        cin>>q;
        if(q==1){
          cin>>x;
          cin>>y;
          m1[x] +=y;  
        }
        else if(q==2){
            cin>>x;
            m1.erase(x);
        }
        else{
            cin>>x;
            map<string,int>::iterator it=m1.find(x);
            if(it!= m1.end())
            cout<<m1[x]<<endl;
            else
            {cout<<0<<endl;}
        }
    }
    
return 0;
}