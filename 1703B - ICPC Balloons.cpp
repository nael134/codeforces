#include<iostream>
#include<set>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        set<char>ll;
        for(int i=0; i<s.length(); i++)
        {
            ll.insert(s[i]);
        }
        cout<<ll.size()*2 + (s.length()-ll.size())<<endl;
    }
}
