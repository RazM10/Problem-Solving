#include<bits/stdc++.h>
using namespace std;

int main()
{

    char s[256];
    while(gets(s))
    {
        int len=strlen(s)-1;
        int accept=0;
        while(len>=0)
        {
            if(s[len]>='p' && s[len]<='z')
            {
                accept++;
            }
            else if(s[len]=='N')
            {
                if(accept==0)
                {
                    break;
                }
            }
            else if(s[len]=='C' || s[len]=='D' || s[len]=='E' || s[len]=='I')
            {
                if(accept<2)
                {
                    accept=0;
                    break;
                }
                accept--;
            }
            len--;
        }
        puts((accept==1) ?"YES" :"NO");
    }
    return 0;
}
