#include<stdio.h>
int main()
{
    int a,b,c=2,ak[100];
    scanf("%d",&a);
    while(1)
    {
        if(a%c==0)
            {
                printf("%d\n",c);
                a=a/c;
            }
        else if(a==1)
        {
        	printf("%d\n",c=0);
            break;
        }
        else
        {
        	c++;
		}
    }
    

    return 0;
}
