#include<stdio.h>
int main ()
{
	int n[5][4]={},i,j,k=0,a[5]={},m=0,l;
	for(i=0;i<=4;i++)
	{
			for(j=0;j<=3;j++)
		{
			scanf("%d",&n[i][j]);
		}}
	for(i=0;i<=4;i++)
	{
		a[i]=0;
			for(j=0;j<=3;j++)
		{
			a[i]=a[i]+n[i][j];
		}
		l=a[0];
		m=1;
	}
	for(i=0;i<=4;i++)
	{
		if(l<a[i])
		{
			l=a[i];
			m=i+1;
		}
	}
	printf("%d %d",m,l);
}
