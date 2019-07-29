#include<stdio.h>
#include<stdlib.h>
int main()
	{
		int n,i,k,sum=0;
		scanf("%d %d",&n,&k);
		int a[100];
		for(i=1;i<=n;i++)
			{
				scanf("%d",&a[i]);
			}
			for(i=1;i<=k;i++)
			{
				sum=sum+a[i];
			}
			printf("%d",sum);
	}
