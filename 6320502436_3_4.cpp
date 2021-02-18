#include<stdio.h>
int main()
{
    int a,c=2;
    scanf("%d",&a);
    while(a!=0)
    {
        if(a%c==0)
        {
            if(a==c)
            {
                printf("%d",c);
                break;
            }
            a--;
        }
        else
        {
            c++;
        }
    }




}
