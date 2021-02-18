#include<stdio.h>
int main()
{
    int a,b,c=2;
    scanf("%d",&a);
    while(1)
    {
            if(a%c==0)
            {
                printf("%d\n",c);
                a=a/c;
            }
            else
            {
                c++;
            }
        
    }

    return 0;
}
