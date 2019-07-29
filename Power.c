#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
	{
		int n,m;
		long long int res;
		scanf("%d %d",&n,&m);
		while(m>0)
		{
			res*=n;
			--m;
		}
		printf("%lld",res);
	}
