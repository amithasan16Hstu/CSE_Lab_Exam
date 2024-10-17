#include<iostream>
using namespace std;
int main()
{
    string s;
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>s;
        if(s=="YES" || s=="yes" || s=="Yes" || s=="YEs" || s=="YeS" || s=="yEs" || s=="yES" || s=="yeS")
        {
            cout<<"YES"<<endl;
        }
        else if(s==" "){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}