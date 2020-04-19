#include<bits/stdc++.h>
using namespace std;

#define swapp(x,y){int temp=x; x=y; y=temp;}
#define maxx(x,y){(x>y)?x:y}

int main()
{
    int i,j;

    while(scanf("%d %d",&i,&j) != EOF)
    {
        int temp_i=i,temp_j=j;
        if(temp_i>temp_j)swapp(temp_i,temp_j);
        int max_count=0,present_count;
        while(temp_j>=temp_i)
        {
            present_count=1;
            int temp_1=temp_j;
            while(temp_1>1)
            {
                if(temp_1%2==0)
                    temp_1=temp_1/2;
                else
                    temp_1=(3*temp_1)+1;
                present_count++;
            }
            max_count=maxx(max_count,present_count);
            temp_j--;
        }
        printf("%d %d %d\n",i,j,max_count);
    }

    return 0;
}
