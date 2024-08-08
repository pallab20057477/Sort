#include<stdio.h>
int main()
{
	int num,i,j,position,arr[20],temp;
	printf("Enter number:	");
	scanf("%d",&num);
	printf("Enter %d elements",num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<num-1;i++)
	{
		position=i;
		for(j=i+1;j<num;j++)
		{
			if(arr[j]<arr[position])
			{
			
			position =j;
		}
	}
		if(position!=i)
		{
		temp=arr[i];
		arr[i]=arr[position];
		arr[position]=temp;			
		}
	}
	for(i=0;i<num;i++)
	{
		printf("%d\t",arr[i]);
	}
	
	return 0;
 
}
