#include<iostream>
using namespace std;
class Box{
    public :
    long int l,b,h;
    long  long c;
    Box()
    {
    l=b=h=0;
    }
    Box(long int x,long int y,long int z){
    l=x;
    b=y;
    h=z;}
    Box( Box &B1){
        l=B1.l;
        b=B1.b;
        h=B1.h;
    }
    int getLength()
     {
        return l;
     }
    int getbreath()
    {
        return b;

    }
    int getheight()
     {
        return h;
     }
     long long CalculateVolume()
     { 
        c=l*b*h;
        return c;
     }
     friend bool operator < (Box& A ,Box& B){
         if((A.l < B.l) || (A.l == B.l && A.b < B.b) ||
               (A.l == B.l && A.b == B.b && A.h <B.h))
                return(true);
            else
                return(false);
     }
     friend ostream& operator<<(ostream& out, Box& A)
     {
        out<<A.l<<" "<<A.b<<" "<<A.h;
        return out;
     }

};


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}