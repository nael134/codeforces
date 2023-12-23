#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int x=a[0];
        int y=0;
        for(int i=0; i<n; i++)
        {
            y+=a[i]-x;
        }
        cout<<y<<endl;
    }
}
