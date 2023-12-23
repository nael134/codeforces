#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,one(0),two(0);
        cin>>n;
        while(n--)
        {
            cin>>x;
            if(x==1)
            {
                one++;
            } else
                two++; 
        }
        if(one>0)
        {
            if((one+(two*2))%2 == 0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        } else if(two%2 == 0)
        {
            cout<<"YES"<<endl;
        } else 
            cout<<"NO"<<endl;
    }
}
