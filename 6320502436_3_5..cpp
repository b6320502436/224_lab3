#include<stdio.h>
int main()
{
    int a,b,c=2,g,f,h,i,j,e;
    scanf("%d",&a);
	g=a;
	int ak=0;
    while(1)
    {
        if(a%c==0)
            {
                a=a/c;
                ak=ak+1;
            }
        else if(a==1)
        {
        	if(ak>3)
            	{
            		f=0;
				}
				else 
				f=1;
			
			if(f==1)
			{printf("%d is a Lucky Number",g);
		break;}
			else 
			{
			printf("%d is not a Lucky Number.",g);
			break;
        }
		}
        else
        {
        	c++;
		}
    }
    return 0;
}
