#include<bits/stdc++.h>
using namespace std;

int i, v, x, l, c;

void initAsZero()
{
    i=0;
    v=0;
    x=0;
    l=0;
    c=0;
}

void forA(int a)
{
    if(a==1)
        x++;
    else if(a==2)
        x=x+2;
    else if(a==3)
        x=x+3;
    else if(a==4 || a==6)
    {
        x++;
        l++;
    }
    else if(a==5)
        l++;
    else if(a==7)
    {
        x=x+2;
        l++;
    }
    else if(a==8)
    {
        x=x+3;
        l++;
    }
    else if(a==9)
    {
        x++;
        c++;
    }
}

void forB(int b)
{
    if(b==1)
        i++;
    else if(b==2)
        i=i+2;
    else if(b==3)
        i=i+3;
    else if(b==4 || b==6)
    {
        i++;
        v++;
    }
    else if(b==5)
        v++;
    else if(b==7)
    {
        i=i+2;
        v++;
    }
    else if(b==8)
    {
        i=i+3;
        v++;
    }
    else if(b==9)
    {
        i++;
        x++;
    }
}

int main()
{
    int number;
    while(cin>>number)
    {
        initAsZero();
        if(number==0)
            break;
        if(number==100)
            c++;
        for(int j=1; j<=number; j++)
        {
            if(j==100)
                break;
            int a=j/10;
            int b=j-(a*10);
            forA(a);
            forB(b);
        }

        printf("%d: %d i, %d v, %d x, %d l, %d c\n",number,i,v,x,l,c);
    }
    return 0;
}
