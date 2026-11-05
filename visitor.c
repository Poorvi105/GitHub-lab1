#include<stdio.h>
#define max_visitors 100

typedef struct
{
	int ages[max_visitors];
	int count;
	int totalage;

}visitortracker;

void addVisitor(visitortracker*tracker,int age)
{
	if(tracker->count>=max_visitors)
	{
		printf("visitor limit reached.\n");
		return;
	}
	
	if(age<0||age>120)
	{
		printf("invalid age:%d\n",age);
		return;
	}
	
	tracker->ages[tracker->count]=age;
	tracker->count++;
	tracker->totalage+=age;
}

void displayStatistics(const visitortracker*tracker)
{
	if(tracker->count==0)
	{
		printf("no visitors recorded.\n");
		return;
	}
	int min=tracker->ages[0];
	int max=tracker->ages[0];
	
	for(int i=1;i<tracker->count;i++)
	{
		if(tracker->ages[i]<min)
	     min=tracker->ages[i];
		
		if(tracker->ages[i]>max)
		 max=tracker->ages[i];
	}
	double average=(double)tracker->totalage/tracker->count;
	
	printf("\nvisitor count:%d\n",tracker->count);
	printf("total age:%d\n",tracker->totalage);
	printf("average age:%.2f\n",average);
	printf("minimum age:%d\n",min);
	printf("maximum age:%d\n",max);
}
	
int main(void)
{
	visitortracker tracker ={{0},0,0};
	
	int sampleages[]={18,25,32,40,21};
	int n=sizeof(sampleages)/sizeof(sampleages[0]);
	
	for(int i=0;i<n;i++)
	    add Visitor(&tracker,sampleages[i]);
	
	printf("visitor ages:");
	for(int i=0;i<tracker.count;i++)
	    printf("%d",tracker.ages[i]);
	displayStatistics(&tracker);
	return 0;
}

