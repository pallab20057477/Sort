#include<stdio.h>
int main()
{
	int num,i,j,swap,arr[20];
	printf("Enter number:	");
	scanf("%d",& num );
	printf("Enter %d number",num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<num-1;i++)
	{
		for(j=0;j<num-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=swap;
			}
		}
	}
	printf("Sorted number\n");
	for(i=0;i<num;i++)
	{
		printf("%d\t",arr[i]);
	}
	
	return 0;
}
