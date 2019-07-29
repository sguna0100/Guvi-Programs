#include <stdio.h>
#include<stdlib.h>
int main()
	{
		int n,i=1,count=0;
		scanf("%d",&n);
		while(i<=n)
			{
				if(n%i==0)
						count++;
						i++;
			}
			if(count==2)
				{
					printf("yes");
				}
				else
					{
						printf("no");
					}
	}
