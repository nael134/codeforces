#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double n; 
        cin>>n;
        if(static_cast<int>(ceil(n/3)) + static_cast<int>(floor(n/3))*2 == n)
           cout<< static_cast<int>(ceil(n/3))<<" "<< static_cast<int>(floor(n/3))<<endl;
        else
        	cout<<static_cast<int>(floor(n/3))<<" "<<static_cast<int>(ceil(n/3))<<endl;
    }
}
