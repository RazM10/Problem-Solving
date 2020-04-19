#include<bits/stdc++.h>
using namespace std;

int n,m,nMm,r,ms;
//nMm=n-m, ms=m save, r=remove

long long clacResult()
{
    long long nC=1;
    int c=1;
    bool flag=0;
    for(int i=r+1; i<=n; i++)
    {
        nC=nC*i;
        nC=nC/c;
        c++;
    }
    return nC;
}

int main()
{
    while(cin>>n>>m)
    {
        nMm=0;
        r=0;
        if(n==0 && m==0)
            break;
        ms=m;
        nMm=n-m;
        if(nMm>m)
            r=nMm;
        else
        {
            r=m;
            m=nMm;
        }
        long long nC=clacResult();
        cout<<n<<" things taken "<<ms<<" at a time is "<<nC<<" exactly."<<endl;
    }
    return 0;
}
