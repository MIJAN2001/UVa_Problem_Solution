#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3,i,n,s=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        s++;
        cin>>n1>>n2>>n3;
        if(n1>n2&&n1>n3)
        {
            if(n2>n3)
                cout<<"Case "<<s<<": "<<n2<<endl;
            else
                cout<<"Case "<<s<<": "<<n3<<endl;
        }
        else if(n2>n1&&n2>n3)
        {
            if(n1>n3)
                cout<<"Case "<<s<<": "<<n1<<endl;
            else
                cout<<"Case "<<s<<": "<<n3<<endl;
        }
        else if(n3>n2&&n3>n1)
        {
            if(n2>n1)
                cout<<"Case "<<s<<": "<<n2<<endl;
            else
                cout<<"Case "<<s<<": "<<n1<<endl;;
        }
    }


    return 0;
}
