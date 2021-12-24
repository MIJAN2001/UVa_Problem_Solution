#include<iostream>
using namespace std;
long long int reverse(long long int n);
int main()
{

    int n,i,it;
    long long int ori,r1,r2,sum;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>ori;
        r1=reverse(ori);
        if(r1==ori)
        {
            cout<<"0"<<" "<<r1<<endl;
        }
        else
        {
            it=0;
            while(1)
            {
                it++;
                sum=0;
                sum=ori+r1;
                r2=reverse(sum);
                if(r2==sum)
                {
                    cout<<it<<" "<<r2<<endl;
                    break;
                }
                else
                {
                    ori=sum;
                    r1=r2;
                }
            }
        }
    }


    return 0;
}
long long int reverse(long long int n)
{
    long long int r,sum=0;
    while(n != 0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    return sum;
}
