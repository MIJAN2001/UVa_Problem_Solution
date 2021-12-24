#include<iostream>
#include<stdio.h>
using namespace std;
int main(){

    int v,t,s;
    while((scanf("%d%d",&v,&t))!=EOF){
       cin>>v>>t;
       s=2*v*t;
       cout<<s<<endl;
    }

    return 0;
}
