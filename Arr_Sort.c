#include <stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,size;
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
    	for(j=i+1;j<size;j++)
    	{
        if(arr[i]>arr[j])
        	{
            	int temp=arr[i];
            	arr[i]=arr[j];
            	arr[j]=temp;
        	}
    	}	
	}
	for(i=0;i<size;i++)
    printf("%d ",arr[i]);
    return 0;
}
