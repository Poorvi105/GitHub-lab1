#include <stdio.h>
int main(void)
{
	int nums[]={2,7,11,15};
	int n=sizeof(nums)/sizeof(nums[0]);
	int target=9;
	
	int found=0;
	
	for(inti=0;i<n-1&&!found;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(nums[i]+nums[j]==target)
			{
				printf("target:%d\n",target);
				printf("indices:[%d,%d]\n",i,j);
				printf("values:%d+%d=%d\n",nums[i],nums[j],target);
				found=1;
				break;
			}
		}
	}
	
	if(!found)
	    printf("no 2 numbers add up to %d.\n",target);
	
	return 0;
}
