#include<bits/stdc++.h>
#define swapping(x,y) {int temp=x;x=y;y=temp;}
using namespace std;

int  main()
{
    int a[100],n,l,s;

    scanf("%d",&n);
    while(n>0)
    {
        s=0;
        scanf("%d",&l);
        for(int i=0; i<l; i++)
        {
            scanf("%d",&a[i]);
        }
        for(int j=0; j<l; j++)
        {
            for(int i=l-1; i>=j; i--)
            {
                if(i==0)
                    break;
                else if(a[i-1]>a[i])
                {
                    swapping(a[i-1],a[i]);
                    s++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",s);
        n--;
    }
    return 0;
}
