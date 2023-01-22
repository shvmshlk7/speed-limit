#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        double a,x,b,y,s1,s2;
        cin>>a>>x>>b>>y;
        s1=a/x;
        s2=b/y;
        if(s1>s2)
        {
            cout<<"Alice"<<endl;
        }
        else if (s2>s1)
        {
            cout<<"Bob"<<endl;
        }
        else if(s1=s2)
        {
            cout<<"Equal"<<endl;
        }
    }

	return 0;
}
