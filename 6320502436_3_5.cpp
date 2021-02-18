#include<stdio.h>
int main()
{
    int a,b,c=2,g,f,h,i,j,e;
    scanf("%d",&a);
	g=a;
	int ak[g]={};
    
    while(1)
    {
        if(a%c==0)
            {
                a=a/c;
                ak[c]=ak[c]+1;
            }
        else if(a==1)
        {
        	for(e=0;e<100;e++)
            {
            	if(ak[e]>=3)
            	{
            		f=0;
				}
				else 
				f=1;
			}
			if(f==1)
			printf("%d is a Lucky Number",g);
			else 
			{
			printf("%d is not a Lucky Number.",g);
			break;
        }}
        else
        {
        	c++;
		}
    }
    return 0;
    }
