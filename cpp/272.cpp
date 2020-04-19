#include<bits/stdc++.h>
using namespace std;
#define INT(c) ((int)(c-'0'))
#define CHAR(i) ((char) (i+'0'))
int main()
{
//    char c='a';
//    int i=INT(c);
//    char ch=CHAR(i);
//    cout<<i<<" "<<ch;
//    char ch=getchar();
//    putchar(ch);
//    printf("\n");
//    char ch2[100];
//    gets(ch2);
//    puts(ch2);`'
    char c;
    int flag=0;
    while((c=getchar())!=EOF)
    {
        if(c=='"')
        {
            if(flag==0)
            {
                printf("``");
                flag=1;
            }
            else if(flag==1)
            {
                printf("''");
                flag=0;
            }
        }
        else
        {
            putchar(c);
        }
    }
    return 0;
}
