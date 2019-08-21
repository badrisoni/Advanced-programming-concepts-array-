#include <stdio.h>
#include <stdlib.h>
int check(int * arr,int num)
{
	int flag=1,count=1,k=0,first_time=0;
	int * temp=(int *)malloc(num*sizeof(int));
	for(int i=0;i<num;i++)
	{
		if(arr[i]==count)
		{
		    
			count++;
		}
		else if(first_time!=0 && count==temp[k-1])
		{
			count++;
			k--;
			i--;
		}
		else
		{
			temp[k]=arr[i];
			k++;
			first_time++;
		}
	}
	k--;
	while(count<=num)
	{
		if(count==temp[k])
		{
			count++;
			k--;
		}
		else
		{
			flag=0;
			break;
		}
	}
	return flag==1?1:0;
}
int main(void) {
	// your code here
	int num=0;
	scanf("%d",&num);
	while(num!=0)
	{
		int * arr=(int *)malloc(num*sizeof(int));
		for(int i=0;i<num;i++)
		{
			scanf("%d",&arr[i]);
		}
		int x=check(arr,num);
		if(x==0)
		printf("no\n");
		else
		printf("yes\n");
		scanf("%d",&num);
	}

	return 0;
}
