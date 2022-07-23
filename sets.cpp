#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
    set<int>s1;
    int n,q,i,x;
    
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        cin>>q;
        if(q==1){
          cin>>x;
          s1.insert(x);
        }
        else if(q==2){
            cin>>x;
            s1.erase(x);
        }
        else{
            cin>>x;
            set<int>::iterator it=s1.find(x);
            if(it!= s1.end())
            cout<<"Yes"<<endl;
            else
            {cout<<"No"<<endl;}
        }
    }
    
return 0;
}