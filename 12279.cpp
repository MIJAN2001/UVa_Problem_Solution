#include<iostream>
using namespace std;
int main(){
    int i,j,n,v,n1,n2,s=0;
    for(i=0;i<75;i++){
        cin>>n;
        if(n==0)
            return 0;
        n1=0;
        n2=0;
        s++;
        for(j=0;j<n;j++){
            cin>>v;
            if(v!=0)
                n1++;
            else
                n2++;
        }
        cout<<"Case "<<s<<": "<<(n1-n2)<<endl;
    }

    return 0;
}
