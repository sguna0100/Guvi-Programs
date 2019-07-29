#include <stdio.h>
int main()
{
 int i,a,count;
 scanf("%d %d",&m,&n);
 for (i=m+1;i<n;i++)
 {
	 count=0;
		 for (a=1;a<=i;a++)
		 {
 			if (i%a==0)
 				count++;
 		 }
	 if (count==2)
		 printf("%d\t",i);
 }
 return 0;
}
