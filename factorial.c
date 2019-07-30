#include<stdio.h>
#include<stdlib.h>
int main()
	{
		int n,fact=1,i;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
			{
				fact=fact*i;
			}
			printf("%d",fact);
	}
