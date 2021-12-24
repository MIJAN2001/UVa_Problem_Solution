#include<iostream>
using namespace std;
int main(){
    int i,n,l,w,h,s=0;
    cin>>n;
    for(i=0;i<n;i++){
        s++;
        cin>>l>>w>>h;
        if(l>20||w>20||h>20)
            cout<<"Case "<<s<<": bad"<<endl;
        else
            cout<<"Case "<<s<<": good"<<endl;
    }


    return 0;
}
